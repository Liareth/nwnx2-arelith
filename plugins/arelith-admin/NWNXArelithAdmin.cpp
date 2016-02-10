#include "NWNXArelithAdmin.hpp"
#include "NWNXApi.h"
#include <cstring>
#include <string>

NWNXArelithAdmin::NWNXArelithAdmin()
{
    confKey = "ARELITH_ADMIN";
}

NWNXArelithAdmin::~NWNXArelithAdmin()
{
}

bool NWNXArelithAdmin::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_admin.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith Admin loaded    \n");
    Log(0, "http://www.arelith.com       \n");
    Log(0, "(c) Scholar Midnight 2016    \n");
    Log(0, "---------------------------- \n");

    return true;
}

char* NWNXArelithAdmin::OnRequest(char* gameObject, char* request, char* params)
{
    const std::string requestStr(request);

    if (requestStr.find("GET_PLAYER_PASSWORD") != std::string::npos)
    {
        Log(0, "Getting player password ... ");
        CExoString pw = g_pAppManager->ServerExoApp->GetNetLayer()->GetPlayerPassword();
        char* copy = new char[std::strlen(pw.Text) + 1];
        std::strcpy(copy, pw.Text);
        Log(0, "got %s!\n", copy);
        return copy;
    }
    else if (requestStr.find("GET_DM_PASSWORD") != std::string::npos)
    {
        Log(0, "Getting DM password ... ");
        CExoString pw = g_pAppManager->ServerExoApp->GetNetLayer()->GetGameMasterPassword();
        char* copy = new char[std::strlen(pw.Text) + 1];
        std::strcpy(copy, pw.Text);
        Log(0, "got %s!\n", copy);
        return copy;
    }
    else if (requestStr.find("SET_PLAYER_PASSWORD") != std::string::npos)
    {
        Log(0, "Setting player password to %s ... ", params);
        g_pAppManager->ServerExoApp->GetNetLayer()->SetPlayerPassword(params);
        Log(0, "set!\n");

    }
    else if (requestStr.find("SET_DM_PASSWORD") != std::string::npos)
    {
        Log(0, "Setting DM password to %s ... ", params);
        g_pAppManager->ServerExoApp->GetNetLayer()->SetGameMasterPassword(params);
        Log(0, "set!\n");
    }
    else if (requestStr.find("CLEAR_PLAYER_PASSWORD") != std::string::npos)
    {
        Log(0, "Clearing player password ... ");
        g_pAppManager->ServerExoApp->GetNetLayer()->SetPlayerPassword("");
        Log(0, "done!\n");
    }

    return nullptr;
}