#include "CNWSCreature__UpdateAppearanceForEquippedItems.hpp"
#include "CNWSMessage__WriteGameObjUpdate_UpdateAppearance.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSCreature__UpdateAppearanceForEquippedItems;

std::unique_ptr<FunctionHook> Hooks::CNWSCreature__UpdateAppearanceForEquippedItems::g_hookPtr;

void Hooks::CNWSCreature__UpdateAppearanceForEquippedItems::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CNWSCreature::UpdateAppearanceForEquippedItems",
        Functions::CNWSCreature__UpdateAppearanceForEquippedItems,
        getFuncAddr(&CNWSCreature__UpdateAppearanceForEquippedItems__Hook));
}

void Hooks::CNWSCreature__UpdateAppearanceForEquippedItems::Unhook()
{
    g_hookPtr.reset();
}

int32_t Hooks::CNWSCreature__UpdateAppearanceForEquippedItems__Hook(CNWSCreature* thisPtr)
{
    int32_t ret = g_hookPtr->callOriginal<CallingConvention::ThisCall, int32_t>(thisPtr);

    if (CNWSMessage__WriteGameObjUpdate_UpdateAppearance::IsHelmetHidden(thisPtr))
    {
        thisPtr->CreatureAppearanceInfo.HeadObjId = OBJECT_INVALID;
    }

    return ret;
}