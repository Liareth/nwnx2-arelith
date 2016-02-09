#include "CNWSCreature__AddAssociate.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSCreature__AddAssociate;

std::unique_ptr<FunctionHook> Hooks::CNWSCreature__AddAssociate::g_hookPtr;
std::string Hooks::CNWSCreature__AddAssociate::g_handler;

void Hooks::CNWSCreature__AddAssociate::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CNWSCreature::AddAssociate",
        Functions::CNWSCreature__AddAssociate,
        getFuncAddr(&CNWSCreature__AddAssociate__Hook));
}

void Hooks::CNWSCreature__AddAssociate::Unhook()
{
    g_hookPtr.reset();
}

void Hooks::CNWSCreature__AddAssociate::OnRegister(const std::string& handler)
{
    g_handler = handler;
}

void Hooks::CNWSCreature__AddAssociate__Hook(CNWSCreature* thisPtr, uint32_t assocId, uint16_t a2)
{
    if (!g_handler.empty())
    {
        CExoString script = g_handler.c_str();
        g_pVirtualMachine->RunScript(&script, thisPtr->ObjectID, 1);
    }

    return g_hookPtr->callOriginal<CallingConvention::ThisCall, void>(thisPtr, assocId, a2);
}