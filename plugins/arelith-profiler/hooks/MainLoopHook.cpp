#include "MainLoopHook.hpp"
#include "AllHooks.hpp"
#include "MySQLHandler.hpp"
#include "NWNXLib.h"

using namespace std;
using namespace std::chrono;

const unsigned long MainLoopHook::MAIN_LOOP_ADDR = 0x080B2050;
const long long MainLoopHook::FLUSH_INTERVAL_IN_MS = 10000;

MainLoopHook* MainLoopHook::m_instance;
ProfilingHandler* MainLoopHook::m_parent;
unordered_map<string, ScriptPerfInfoStruct> MainLoopHook::m_formattedScriptMap;
unordered_map<std::string, PathingPerfInfoStruct> MainLoopHook::m_formattedPathingMap;
steady_clock::time_point MainLoopHook::m_lastFlush;
std::unique_ptr<std::thread>* MainLoopHook::m_processingThreadPtr;
unsigned int MainLoopHook::m_mainLoopTicks;
unsigned long long MainLoopHook::m_mainLoopCycles;

struct Client
{
    char padding[8];
    void** vtable;
};

struct CharEqualityFunc
{  
    bool operator()(const char* lhs, const char* rhs) const  
    { 
        return strcmp(lhs, rhs) == 0; 
    }
};

struct CharHashFunc
{
    // DJB hash algorithm
    int operator()(const char* str) const
    {
        unsigned long hash = 5381;
        int c;

        while ((c = *str++) != 0)
        {
            hash = ((hash << 5) + hash) + c;
        }

        return hash;
    }
};

MainLoopHook::MainLoopHook(ProfilingHandler* parent)
{
    HookEvent(EVENT_CORE_PLUGINSLOADED, [](uintptr_t) -> int
    {
        HookEvent(EVENT_CORE_MAINLOOP_BEFORE, &MainLoopHook::mainLoopHookFunc);
        return 0;
    });

    if (m_instance != nullptr)
    {
        abort();
    }

    m_instance = this;
    m_parent = parent;
    m_mainLoopTicks = 0;
    m_mainLoopCycles = 0;
    m_processingThread = make_unique<thread>();
    m_processingThreadPtr = &m_processingThread;
    m_lastFlush = steady_clock::now();
}

MainLoopHook::~MainLoopHook()
{
    if (m_processingThread->joinable())
    {
        m_processingThread->join();
    }

    m_instance = nullptr;
}

MainLoopHook* MainLoopHook::instance()
{
    return m_instance;
}

#pragma GCC push_options
#pragma GCC optimize ("O0")

int MainLoopHook::mainLoopHookFunc(uintptr_t serverExoApp)
{
    m_mainLoopTicks += 1;
    const auto now = steady_clock::now();

    if (__builtin_expect(duration_cast<milliseconds>(steady_clock::now() - m_lastFlush).count() >= FLUSH_INTERVAL_IN_MS, false))
    {
        sortData();

        if ((*m_processingThreadPtr)->joinable())
        {
            (*m_processingThreadPtr)->join();
        }

        auto* clientList = (*NWN_AppManager)->app_server->srv_internal->srv_client_list_1;
        auto* first = clientList->header->first;
        unsigned short playerCount = 0;
        unsigned short dmCount = 0;

        while (first != nullptr)
        {
            Client* data = reinterpret_cast<Client*>(first->data);
            // The fourth element of the vtable points to AsNWSDungeonMaster.
            void*(*asDMFunction)(Client*) = reinterpret_cast<void*(*)(Client*)>(data->vtable[3]);

            if (asDMFunction(data) != nullptr)
            {
                ++dmCount;
            }
            else
            {
                ++playerCount;
            }

            first = first->next;
        }

        SnapshotDataStruct data
        {
            NWNXArelithProfiler::serverId(), 
            m_mainLoopTicks, 
            m_mainLoopCycles, 
            PrintLogEntryHook::getCyclesAndReset(), 
            playerCount,
            dmCount
        };

        // Start the thread to send data to the SQL Database if we've build threaded.
        (*m_processingThreadPtr) = unique_ptr<thread>{new thread{pushDataToDb, move(data)}};

        RunScriptHook::flushCaches();
        IntraTileDFSHook::flushCaches();
        m_mainLoopTicks = 0;
        m_mainLoopCycles = 0;
        m_lastFlush = now;
    }

    return 0;
}

#pragma GCC pop_options

void MainLoopHook::sortData()
{
    sortScriptData();
    sortPathingData();
}

void MainLoopHook::sortScriptData()
{
    m_formattedScriptMap.clear();

    ScriptTimingStruct* data = RunScriptHook::dataPtr();
    const unsigned int dataLen = RunScriptHook::dataSize();

    // First pass -- sort elements into an hash map, using a c-style string as a key.
    // Don't use an std::string yet as we can't afford to waste the performance of
    // creating an std::string for every single entry.
    // We need to do this BEFORE we enter a new thread, otherwise the keys would become 
    // invalid when the script name cache is reset. A copy of the relevant name is created
    // in the second pass.
    unordered_map<const char*, ScriptPerfInfoStruct, CharHashFunc, CharEqualityFunc> rawPerfInfoMap{100};

    for (unsigned int i = 0; i < dataLen; ++i)
    {
        ScriptTimingStruct* elem = data + i;
        auto& val = rawPerfInfoMap[elem->scriptName];
        val.totalExecutionCycles += elem->executionTime;
        ++val.totalCalls;
    }

    // Second pass -- Now that we only have a few keys, we can convert the remaining
    // c-style strings into std::strings.
    for (auto& elem : rawPerfInfoMap)
    {
        m_formattedScriptMap.insert({string{elem.first}, move(elem.second)});
    }
}

void MainLoopHook::sortPathingData()
{
    m_formattedPathingMap.clear();

    AreaTimingStruct* data = IntraTileDFSHook::dataPtr();
    const unsigned int dataLen = IntraTileDFSHook::dataSize();

    // First pass -- sort elements into an hash map, using a c-style string as a key.
    // Don't use an std::string yet as we can't afford to waste the performance of
    // creating an std::string for every single entry.
    // We need to do this BEFORE we enter a new thread, otherwise the keys would become 
    // invalid when the script name cache is reset. A copy of the relevant name is created
    // in the second pass.
    unordered_map<const char*, PathingPerfInfoStruct, CharHashFunc, CharEqualityFunc> rawPerfInfoMap{50};

    for (unsigned int i = 0; i < dataLen; ++i)
    {
        AreaTimingStruct* elem = data + i;
        auto& val = rawPerfInfoMap[elem->areaName];
        val.totalExecutionCycles += elem->executionTime;
    }

    // Second pass -- Now that we only have a few keys, we can convert the remaining
    // c-style strings into std::strings.
    for (auto& elem : rawPerfInfoMap)
    {
        m_formattedPathingMap.insert({string{elem.first}, move(elem.second)});
    }
}

void MainLoopHook::pushDataToDb(SnapshotDataStruct snapshot)
{
    // There's no race condition here, because the main thread will block before this is called again.
    m_parent->storeData(&snapshot, &m_formattedScriptMap, &m_formattedPathingMap);
}