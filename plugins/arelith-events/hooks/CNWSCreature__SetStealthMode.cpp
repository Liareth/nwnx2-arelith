#include "CNWSCreature__SetStealthMode.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSCreature__SetStealthMode;

std::unique_ptr<FunctionHook> Hooks::CNWSCreature__SetStealthMode::g_hookPtr;
std::string Hooks::CNWSCreature__SetStealthMode::g_enterHandler;
std::string Hooks::CNWSCreature__SetStealthMode::g_exitHandler;

void Hooks::CNWSCreature__SetStealthMode::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CNWSCreature::SetStealthMode",
        Functions::CNWSCreature__SetStealthMode,
        getFuncAddr(&CNWSCreature__SetStealthMode__Hook));
}

void Hooks::CNWSCreature__SetStealthMode::Unhook()
{
    g_hookPtr.reset();
}

void Hooks::CNWSCreature__SetStealthMode::OnRegisterEnter(const std::string& script)
{
    g_enterHandler = script;
}

void Hooks::CNWSCreature__SetStealthMode::OnRegisterExit(const std::string& script)
{
    g_exitHandler = script;
}

void Hooks::CNWSCreature__SetStealthMode__Hook(CNWSCreature* thisPtr, const uint8_t mode)
{
    if (thisPtr->IsPC)
    {
        const bool currentlyStealthed = thisPtr->GetStealthMode() != 0;
        const bool willBeStealthed = mode != 0;

        std::string* toRun = nullptr;

        if (!currentlyStealthed && willBeStealthed)
        {
            if (!g_enterHandler.empty())
            {
                toRun = &g_enterHandler;
            }
        }
        else if (currentlyStealthed && !willBeStealthed)
        {
            if (!g_exitHandler.empty())
            {
                toRun = &g_exitHandler;
            }
        }

        if (toRun != nullptr)
        {
            CExoString script = toRun->c_str();
            g_pVirtualMachine->RunScript(&script, thisPtr->ObjectID, 1);
        }
    }

    return g_hookPtr->callOriginal<CallingConvention::ThisCall, void>(thisPtr, mode);
}