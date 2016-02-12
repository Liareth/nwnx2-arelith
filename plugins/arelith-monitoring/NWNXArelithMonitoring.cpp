#include "NWNXArelithMonitoring.hpp"
#include "ServerConfig.hpp"
#include "metrics/mainloopticks/MainLoopTicks.hpp"
#include <string>

NWNXArelithMonitoring::NWNXArelithMonitoring()
{
    confKey = "ARELITH_MONITORING";
}

NWNXArelithMonitoring::~NWNXArelithMonitoring()
{
}

bool NWNXArelithMonitoring::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_monitoring.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith Monitoring loaded    \n");
    Log(0, "http://www.arelith.com            \n");
    Log(0, "(c) Scholar Midnight 2016         \n");
    Log(0, "----------------------------      \n");

    if (nwnxConfig->exists(confKey)) 
    {
        const std::string serverId = (*nwnxConfig)[confKey]["server_id"];
        const std::string port     = (*nwnxConfig)[confKey]["db_port"];

        ServerConfig::g_serverId = serverId.empty() ? 0 : std::stoi(serverId.c_str());
        ServerConfig::g_username = (*nwnxConfig)[confKey]["db_username"];
        ServerConfig::g_password = (*nwnxConfig)[confKey]["db_password"];
        ServerConfig::g_dbName   = (*nwnxConfig)[confKey]["db_name"];
        ServerConfig::g_host     = (*nwnxConfig)[confKey]["db_host"];
        ServerConfig::g_port = port.empty() ? 0 : std::stoi(port.c_str());

        HookEvent(EVENT_CORE_PLUGINSLOADED, [](uintptr_t) -> int
        {
            Metrics::MainLoopTicks::StartCollecting();
            return 0;
        });

        return true;
    }

    return true;
}

char* NWNXArelithMonitoring::OnRequest(char* gameObject, char* request, char* params)
{
    return nullptr;
}