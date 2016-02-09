#include "NWNXArelithStealth.hpp"
#include "NWNXApi.h"
#include "hooks/CNWSCreature__DoStealthDetection.hpp"
#include "hooks/CNWSCreature__SetStealthModeHIPS.hpp"

NWNXArelithStealth::NWNXArelithStealth()
{
    confKey = "ARELITH_STEALTH";
}

NWNXArelithStealth::~NWNXArelithStealth()
{
}

bool NWNXArelithStealth::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_stealth.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith Stealth loaded  \n");
    Log(0, "http://www.arelith.com       \n");
    Log(0, "(c) Scholar Midnight 2016    \n");
    Log(0, "---------------------------- \n");

    Hooks::CNWSCreature__DoStealthDetection::Hook();
    Hooks::CNWSCreature__SetStealthModeHIPS::Hook();

    return true;
}

char* NWNXArelithStealth::OnRequest(char* gameObject, char* request, char* params)
{
    const std::string requestStr(request);

    if (requestStr.find("REVEALPARTY") != std::string::npos)
    {
        Hooks::CNWSCreature__DoStealthDetection::OnRevealParty(
            g_pVirtualMachine->ObjectID[g_pVirtualMachine->RecursionLevel],
            std::string(params).find("TRUE") != std::string::npos);
    }
    else if (requestStr.find("DETECTPARTY") != std::string::npos)
    {
        Hooks::CNWSCreature__DoStealthDetection::OnDetectParty(
            g_pVirtualMachine->ObjectID[g_pVirtualMachine->RecursionLevel],
            std::string(params).find("TRUE") != std::string::npos);
    }
    else if (requestStr.find("REGISTER_HIPS_CALLBACK") != std::string::npos)
    {
        Hooks::CNWSCreature__SetStealthModeHIPS::OnRegister(std::string(params));
    }
    else if (requestStr.find("SKIP_HIPS") != std::string::npos)
    {
        Hooks::CNWSCreature__SetStealthModeHIPS::OnSetSkipHIPS(std::string(params).find("TRUE") != std::string::npos);
    }
    else if (requestStr.find("REVEAL") != std::string::npos)
    {
        Hooks::CNWSCreature__DoStealthDetection::OnReveal(
            g_pVirtualMachine->ObjectID[g_pVirtualMachine->RecursionLevel],
            std::strtoul(params, nullptr, 16));
    }

    return nullptr;
}