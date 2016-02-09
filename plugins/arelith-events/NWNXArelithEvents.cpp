#include "NWNXArelithEvents.hpp"
#include "hooks/CNWSCreature__AddAssociate.hpp"
#include "hooks/CNWSCreature__RemoveAssociate.hpp"
#include "hooks/CNWSCreature__SetStealthMode.hpp"
#include "hooks/CNWSMessage__SendServerToPlayerExamineGui_CreatureData.hpp"

NWNXArelithEvents::NWNXArelithEvents()
{
    confKey = "ARELITH_EVENTS";
}

NWNXArelithEvents::~NWNXArelithEvents()
{
}

bool NWNXArelithEvents::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_Events.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith Events loaded   \n");
    Log(0, "http://www.arelith.com       \n");
    Log(0, "(c) Scholar Midnight 2016    \n");
    Log(0, "---------------------------- \n");

    Hooks::CNWSCreature__AddAssociate::Hook();
    Hooks::CNWSCreature__RemoveAssociate::Hook();
    Hooks::CNWSCreature__SetStealthMode::Hook();
    Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::Hook();

    return true;
}

char* NWNXArelithEvents::OnRequest(char* gameObject, char* request, char* params)
{
    const std::string requestStr(request);

    if (requestStr.find("REGISTER_") != std::string::npos)
    {
        std::string value = requestStr.substr(16, requestStr.length() - 16);
        m_runningEvent = static_cast<EventTypes>(std::stoi(value.c_str()));

        switch (m_runningEvent)
        {
            case EventTypes::EVENT_ADD_ASSOCIATE:
                Hooks::CNWSCreature__AddAssociate::OnRegister(std::string(params));
                break;

            case EventTypes::EVENT_REMOVE_ASSOCIATE:
                Hooks::CNWSCreature__RemoveAssociate::OnRegister(std::string(params));
                break;

            case EventTypes::EVENT_STEALTH_ENTER:
                Hooks::CNWSCreature__SetStealthMode::OnRegisterEnter(std::string(params));
                break;

            case EventTypes::EVENT_STEALTH_EXIT:
                Hooks::CNWSCreature__SetStealthMode::OnRegisterExit(std::string(params));
                break;

            case EventTypes::EVENT_EXAMINE_BEFORE:
                Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::OnRegisterBefore(std::string(params));
                break;

            case EventTypes::EVENT_EXAMINE_AFTER:
                Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::OnRegisterAfter(std::string(params));
                break;
        }
    }
    else if (requestStr.find("GET_EVENT_PARAM") != std::string::npos)
    {
        return nullptr;
    }

    return nullptr;
}

unsigned long NWNXArelithEvents::OnRequestObject(char* gameObject, char* request)
{
    const std::string requestStr(request);

    if (requestStr.find("GET_EVENT_PARAM") != std::string::npos)
    {
        uint32_t id = GetEventParamIDFromString(requestStr);

        switch (m_runningEvent)
        {
            case EventTypes::EVENT_EXAMINE_BEFORE:
            case EventTypes::EVENT_EXAMINE_AFTER:
                return Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::RequestParam(id);
                break;

            default: break;
        }
    }

    return OBJECT_INVALID;
}

uint32_t NWNXArelithEvents::GetEventParamIDFromString(const std::string& str)
{
    return 1;
}