#include "MainLoopTicks.hpp"
#include "ServerConfig.hpp"

#include "NWNXApi.h"
#include "newpluginapi.h"
#include "core/core.h"
#include "mysql.h"

#include <chrono>
#include <string>

namespace
{
    static constexpr int32_t FLUSH_INTERVAL = 10000;
    MYSQL* g_connection = nullptr;

    std::chrono::time_point<std::chrono::steady_clock> g_lastFlushTime;
    uint32_t g_mainLoopTicks = 0;
}

void Metrics::MainLoopTicks::StartCollecting()
{
    g_lastFlushTime = std::chrono::steady_clock::now();

    mysql_library_init(0, nullptr, nullptr);
    g_connection = mysql_init(nullptr);

    mysql_real_connect(g_connection,
        ServerConfig::g_host.c_str(),
        ServerConfig::g_username.c_str(),
        ServerConfig::g_password.c_str(),
        ServerConfig::g_dbName.c_str(),
        ServerConfig::g_port,
        nullptr,
        0);

    std::string query =
        std::string("DELETE FROM monitoring_snapshots WHERE monitoring_servers_ID=") +
        std::to_string(ServerConfig::g_serverId);

    mysql_query(g_connection, query.c_str());

    HookEvent(EVENT_CORE_MAINLOOP_AFTER, MainLoopAfter);
}

void Metrics::MainLoopTicks::StopCollecting()
{
    mysql_close(g_connection);
}

int Metrics::MainLoopTicks::MainLoopAfter(uintptr_t)
{
    const std::chrono::time_point<std::chrono::steady_clock> curTime = std::chrono::steady_clock::now();

    if (std::chrono::duration_cast<std::chrono::milliseconds>(curTime - g_lastFlushTime).count() > FLUSH_INTERVAL)
    {
        std::string query =
            std::string("INSERT INTO monitoring_snapshots(monitoring_servers_ID, MainLoopTicks, PlayerCount) VALUES(") +
            std::to_string(ServerConfig::g_serverId) + ", " +
            std::to_string(g_pAppManager->ServerExoApp->Internal->ClientsList->Count()) + ", " +
            std::to_string(g_mainLoopTicks) + ")";

        mysql_query(g_connection, query.c_str());

        g_lastFlushTime = curTime;
        g_mainLoopTicks = 0;
    }

    ++g_mainLoopTicks;
    return 0;
}