#include "CNWSMessage__WriteGameObjUpdate_UpdateAppearance.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance;

namespace
{
    CNWSCreature* g_creature;
    CNWSItem* g_helm;
}

std::unique_ptr<FunctionHook> Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance::g_hookPtr1;
std::unique_ptr<FunctionHook> Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance::g_hookPtr2;

void Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance::Hook()
{
    g_hookPtr1 = std::make_unique<FunctionHook>(
        "CMWSMessage::WriteGameObjUpdate_UpdateAppearance__1",
        0x0806a65e,
        getFuncAddr(&CNWSMessage__WriteGameObjUpdate_UpdateAppearance__Hook1));

    g_hookPtr2 = std::make_unique<FunctionHook>(
        "CMWSMessage::WriteGameObjUpdate_UpdateAppearance__2",
        0x0806a822,
        getFuncAddr(&CNWSMessage__WriteGameObjUpdate_UpdateAppearance__Hook2));
}

void Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance::Unhook()
{
    g_hookPtr1.reset();
    g_hookPtr2.reset();
}

bool Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance::IsHelmetHidden(CNWSCreature* creature)
{
    if (creature != nullptr)
    {
        CNWSItem* helm = creature->Inventory->GetItemInSlot(EQUIPMENT_SLOT_HEAD);

        if (helm != nullptr)
        {
            CExoString str = "NWNX_ARELITH_HELM_HIDDEN";
            return helm->Object.ScriptVarTable.GetInt(str);
        }
    }

    return false;
}

bool Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance::MidHookIsHelmVisible()
{
    g_helm = g_creature->Inventory->GetItemInSlot(EQUIPMENT_SLOT_HEAD); // EAX -> Ptr, passed on stack
    return !IsHelmetHidden(g_creature) && g_helm != nullptr;
}

// These two inline routines were based on . . . existing code from somewhere, though I can't remember where!
// Maybe the Solitude plugin? Though I can't trace back the origins.

void Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance__Hook1()
{
    __asm__ __volatile__
    (
        "leave;" // Leave stack frame created by this function -- wouldn't need if we had __declspec(naked)
        "mov 12(%%ebp), %%eax;" // Creature
        "mov %%eax, %0;"
        : "=m" (g_creature)
        : // No inputs
        : // No clobbers
    );

    if (MidHookIsHelmVisible())
    {
        __asm__ __volatile__
        (
            "push $0x0806A678;"
        );
    }
    else
    {
        __asm__ __volatile__
        (
            "push $0x0806A679;" // Pretend there's no helmet.
        );
    }

    __asm__ __volatile__
    (
        "ret;"
    );
}

void Hooks::CNWSMessage__WriteGameObjUpdate_UpdateAppearance__Hook2()
{
    __asm__ __volatile__
    (
        "leave;" // Leave stack frame created by this function -- wouldn't need if we had __declspec(naked)
        "mov 12(%%ebp), %%eax;" // Creature
        "mov %%eax, %0;"
        : "=m" (g_creature)
        : // No inputs
        : "eax"
    );

    if (MidHookIsHelmVisible()) // Calls (using no registers), stores in EAX
    {
        __asm__ __volatile__
        (
            "mov %0, %%ebx;"
            "push $0x0806A83E;"
            : // No outputs
            : "m" (g_helm)
            : // We technically clobber EBX but we don't want GCC to know.
        );
    }
    else
    {
        __asm__ __volatile__
        (
            "push $0x0806A884;" // Pretend there's no helmet.
        );
    }

    __asm__ __volatile__
    (
        "ret;"
    );
}