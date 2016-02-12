#ifndef NWNX_ARELITH_MONITORING_SERVER_CONFIG_HPP_
#define NWNX_ARELITH_MONITORING_SERVER_CONFIG_HPP_

#include <cstdint>
#include <string>

namespace ServerConfig
{
    extern uint8_t g_serverId;
    extern std::string g_username;
    extern std::string g_password;
    extern std::string g_dbName;
    extern std::string g_host;
    extern uint32_t g_port;
}

#endif // NWNX_ARELITH_MONITORING_SERVER_CONFIG_HPP_