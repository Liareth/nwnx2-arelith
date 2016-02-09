#include "CNWVirtualMachineCommands__ReportError.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

#include <array>

using namespace Hooks;
using namespace Hooks::CNWVirtualMachineCommands__ReportError;

std::unique_ptr<FunctionHook> Hooks::CNWVirtualMachineCommands__ReportError::g_hookPtr;

void Hooks::CNWVirtualMachineCommands__ReportError::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CNWVirtualMachineCommands__ReportError",
        Functions::CNWVirtualMachineCommands__ReportError,
        getFuncAddr(&CNWVirtualMachineCommands__ReportError__Hook));
}

void Hooks::CNWVirtualMachineCommands__ReportError::Unhook()
{
    g_hookPtr.reset();
}

void Hooks::CNWVirtualMachineCommands__ReportError__Hook(CNWVirtualMachineCommands* vmc,
    CExoString* scriptName, int32_t errId)
{
    CGameObject* obj = reinterpret_cast<CGameObject*>(g_pAppManager->ServerExoApp->GetGameObject(vmc->ObjectID));

    STR_RES tlkStr;
    g_pTlkTable->FetchInternal(abs(errId), tlkStr, 0);

    CExoString timestamp;
    CExoDebug* dbg = (CExoDebug*)g_pExoBase->CExoDebug;
    dbg->GetCurrentTimestamp(timestamp);

    std::array<char, 256> buffer;
    snprintf(buffer.data(), buffer.size(),
        "[%s] SCRIPTERROR -- NWScript %s: %s (%d) on %lx, tag=%s\n",
        timestamp.Text,
        scriptName->Text,
        tlkStr.Text.CStr(),
        errId,
        vmc->ObjectID,
        (obj && obj->ObjectType > OBJECT_TYPE_AREA) ? (reinterpret_cast<CNWSObject*>(obj)->Tag.Text) : ("(no tag)"));

    CExoString output(buffer.data());
    dbg->WriteToLogFile(output);
}