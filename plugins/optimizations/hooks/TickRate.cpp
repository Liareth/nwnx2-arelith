#include "../NWNXOptimizations.h"
#include "core/Profile.h"

using namespace std;

// This optimises AI updates on the server without penalising networking;
// Nearly all of all server load is in AIMaster::UpdateState; so we just
// throttle this to never exceed tickrate calls per second! Since we can't
// sleep here or we'd block the main loop, we just skip calling it if the
// delay since last is smaller than our desired ms.

static uint32_t desiredTickRateHigh;
static uint32_t desiredTickRateLow;

namespace
{
    std::chrono::time_point<std::chrono::steady_clock> g_lastAIUpdateTime;
    std::chrono::time_point<std::chrono::steady_clock> g_mainLoopStartTime;
}

static void CServerAIMaster__UpdateState(CServerAIMaster* aiMaster)
{
    const auto playerCount = g_pAppManager->ServerExoApp->Internal->ClientsList->Count();
    const uint32_t tickrate = playerCount > 0 ? desiredTickRateHigh : desiredTickRateLow;
    const uint32_t targetDelta = static_cast<uint32_t>((1000.0f / static_cast<float>(tickrate)));

    const auto curTime = std::chrono::steady_clock::now();
    const auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(curTime - g_lastAIUpdateTime).count();

    if (elapsedTime > targetDelta)
    {
        aiMaster->UpdateState();
        g_lastAIUpdateTime = curTime;
    }
}

int eventMainLoopBefore(uintptr_t)
{
    g_mainLoopStartTime = std::chrono::steady_clock::now();
    return 0;
}

int eventMainLoopAfter(uintptr_t)
{
    const auto curTime = std::chrono::steady_clock::now();
    const auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(curTime - g_mainLoopStartTime).count();

    if (elapsedTime < 10)
    {
        usleep(10 - elapsedTime);
    }

    return 0;
}

void HookTickRate()
{
    HookEvent(EVENT_CORE_PLUGINSLOADED, [](uintptr_t) -> int
    {
        HookEvent(EVENT_CORE_MAINLOOP_BEFORE, eventMainLoopBefore);
        HookEvent(EVENT_CORE_MAINLOOP_AFTER, eventMainLoopAfter);
        return 0;
    });

    NX_HOOK_CALL(0x080a052b, CServerAIMaster__UpdateState);
    NOP(0x0804BBEE, 16);
}

void SetTargetTickRates(uint32_t hi, uint32_t lo)
{
    desiredTickRateHigh = hi;
    desiredTickRateLow = lo;
}

uint32_t GetTargetTickRate()
{
    return desiredTickRateHigh;
}

uint32_t GetTargetTickRateLow()
{
    return desiredTickRateLow;
}

uint32_t GetCurrentTickRate()
{
    return 0;
}

