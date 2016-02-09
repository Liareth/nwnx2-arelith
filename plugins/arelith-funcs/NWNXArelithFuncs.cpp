#include "NWNXArelithFuncs.hpp"
#include "NWNXApi.h"
#include <array>
#include <string>
#include <sstream>

NWNXArelithFuncs::NWNXArelithFuncs()
{
    confKey = "ARELITH_FUNCS";
}

NWNXArelithFuncs::~NWNXArelithFuncs()
{
}

bool NWNXArelithFuncs::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_funcs.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith Funcs loaded    \n");
    Log(0, "http://www.arelith.com       \n");
    Log(0, "(c) Scholar Midnight 2016    \n");
    Log(0, "---------------------------- \n");

    return true;
}

char* NWNXArelithFuncs::OnRequest(char* gameObject, char* request, char* params)
{
    const std::string requestStr(request);

    if (requestStr.find("FORCE_PLACABLE_EXAMINE_WINDOW") != std::string::npos)
    {
        std::array<uint32_t, 2> ids = { OBJECT_INVALID, OBJECT_INVALID };

        std::stringstream ss(params);
        std::string buffer;

        for (int i = 0; i < 2; ++i)
        {
            ss >> buffer;
            ids[i] = std::strtol(buffer.c_str(), nullptr, 16);
        }

        CNWSPlayer* player = g_pAppManager->ServerExoApp->GetClientObjectByObjectId(ids[0]);
        CNWSMessage* message = g_pAppManager->ServerExoApp->GetNWSMessage();

        if (player != nullptr)
        {
            message->SendServerToPlayerExamineGui_PlaceableData(player, ids[1]);
        }
    }
    else if (requestStr.find("SET_OBJECT_POSITION") != std::string::npos)
    {
        std::stringstream ss(params);
        std::string buffer;

        ss >> buffer;
        CNWSObject* object = reinterpret_cast<CNWSObject*>(
            g_pAppManager->ServerExoApp->GetGameObject(std::strtoul(buffer.c_str(), NULL, 16)));

        if (object != nullptr)
        {
            Vector vec;
            ss >> buffer;
            vec.X = std::stof(buffer.c_str());
            ss >> buffer;
            vec.Y = std::stof(buffer.c_str());
            ss >> buffer;
            vec.Z = std::stof(buffer.c_str());

            object->SetPosition(vec, 0);
        }
    }

    return nullptr;
}