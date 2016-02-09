#include "CNWSCreature__SetStealthModeHIPS.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSCreature__SetStealthModeHIPS;

namespace
{
    CNWSCreature* g_creature = nullptr;
    uintptr_t g_skipAddr;
}

std::unique_ptr<FunctionHook> Hooks::CNWSCreature__SetStealthModeHIPS::g_hookPtr;
std::string Hooks::CNWSCreature__SetStealthModeHIPS::g_handler;
bool Hooks::CNWSCreature__SetStealthModeHIPS::g_shouldSkip = true;

void Hooks::CNWSCreature__SetStealthModeHIPS::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CNWSCreature::SetStealthModeHIPS",
        0x080F97B0,
        getFuncAddr(&CNWSCreature__SetStealthModeHIPS__Hook));

    g_skipAddr = g_hookPtr->trampoline(); // We want to return to the trampoline.
}

void Hooks::CNWSCreature__SetStealthModeHIPS::Unhook()
{
    g_hookPtr.reset();
}

void Hooks::CNWSCreature__SetStealthModeHIPS::OnRegister(const std::string& script)
{
    g_handler = script;
}

void Hooks::CNWSCreature__SetStealthModeHIPS::OnSetSkipHIPS(const bool state)
{
    g_shouldSkip = state;
}

bool Hooks::CNWSCreature__SetStealthModeHIPS::MidHookShouldSkipHIPS()
{
    if (!g_creature->IsPC)
    {
        return false;
    }

    // At this point, we've checked, we have HIPS.
    // We need to now verify that the script-side code is fine with HIPS happening.
    if (!g_handler.empty())
    {
        CExoString script = g_handler.c_str();
        g_pVirtualMachine->RunScript(&script, g_creature->ObjectID, 1); // This script will set g_shouldSkip through a NWNX command.
    }

    return g_shouldSkip;
}

void Hooks::CNWSCreature__SetStealthModeHIPS__Hook()
{
    __asm__ __volatile__
    (
        "leave;" // Leave stack frame created by this function -- wouldn't need if we had __declspec(naked)
        "mov 8(%%ebp), %%eax;" // Can't use intel syntax because GCC dies . . . sadface.
        "mov %%eax, %0" // thisptr into g_creature
        : "=m" (g_creature)
        : // No inputs
        : "eax"
    );

    if (MidHookShouldSkipHIPS())
    {
        __asm__ __volatile__
        (
            "push $0x080F9823;" // Pretend we failed the check.
        );
    }
    else
    {
        __asm__ __volatile__
        (
            "push %0;" // Trampoline address.
            : // No outputs
            : "m" (g_skipAddr)
            : // No clobbers
        );
    }

    __asm__ __volatile__
    (
        "ret;" // Jump to either the "fail" HIPS state, or the trampoline to continue as normal.
    );
}