#include "CNWSCreature__RemoveAssociate.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSCreature__RemoveAssociate;

std::unique_ptr<FunctionHook> Hooks::CNWSCreature__RemoveAssociate::g_hookPtr;
std::string Hooks::CNWSCreature__RemoveAssociate::g_handler;

void Hooks::CNWSCreature__RemoveAssociate::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CNWSCreature::RemoveAssociate",
        Functions::CNWSCreature__RemoveAssociate,
        getFuncAddr(&CNWSCreature__RemoveAssociate__Hook));
}

void Hooks::CNWSCreature__RemoveAssociate::Unhook()
{
    g_hookPtr.reset();
}

void Hooks::CNWSCreature__RemoveAssociate::OnRegister(const std::string& handler)
{
    g_handler = handler;
}

void Hooks::CNWSCreature__RemoveAssociate__Hook(CNWSCreature* thisPtr, uint32_t assocId)
{
    if (!g_handler.empty())
    {
        CExoString script = g_handler.c_str();
        g_pVirtualMachine->RunScript(&script, thisPtr->ObjectID, 1);
    }

    return g_hookPtr->callOriginal<CallingConvention::ThisCall, void>(thisPtr, assocId);
}