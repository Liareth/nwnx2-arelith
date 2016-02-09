#include "NWNXArelithHiddenHelmets.hpp"
#include "hooks/CNWSMessage__WriteGameObjUpdate_UpdateAppearance.hpp"
#include "hooks/CNWSCreature__UpdateAppearanceForEquippedItems.hpp"

NWNXArelithHiddenHelmets::NWNXArelithHiddenHelmets()
{
    confKey = "ARELITH_HIDDENHELMETS";
}

NWNXArelithHiddenHelmets::~NWNXArelithHiddenHelmets()
{
}

bool NWNXArelithHiddenHelmets::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_HiddenHelmets.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith HiddenHelmets loaded  \n");
    Log(0, "http://www.arelith.com             \n");
    Log(0, "(c) Scholar Midnight 2016          \n");
    Log(0, "----------------------------       \n");

    Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance::Hook();
    Hooks::CNWSCreature__UpdateAppearanceForEquippedItems::Hook();
    return true;
}

char* NWNXArelithHiddenHelmets::OnRequest(char* gameObject, char* request, char* params)
{
    return nullptr;
}