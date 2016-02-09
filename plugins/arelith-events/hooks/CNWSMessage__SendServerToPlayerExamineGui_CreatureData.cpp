#include "CNWSMessage__SendServerToPlayerExamineGui_CreatureData.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData;

std::unique_ptr<FunctionHook> Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::g_hookPtr1;
std::unique_ptr<FunctionHook> Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::g_hookPtr2;

std::string Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::g_beforeHandler;
std::string Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::g_afterHandler;

namespace
{
    uintptr_t g_skipAddr;
    CNWSPlayer* g_examiner;
    CNWSObject* g_examinee;
}

void Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::Hook()
{
    g_hookPtr1 = std::make_unique<FunctionHook>(
        "CNWSMessage::SendServerToPlayerExamineGui_CreatureData",
        Functions::CNWSMessage__SendServerToPlayerExamineGui_CreatureData,
        getFuncAddr(&CNWSMessage__SendServerToPlayerExamineGui_CreatureData__Hook));

    g_hookPtr2 = std::make_unique<FunctionHook>(
        "CNWSMessage::SendServerToPlayerExamineGui_CreatureData",
        0x08073F94,
        getFuncAddr(&CNWSMessage__SendServerToPlayerExamineGui_CreatureData__Hook1));

    g_skipAddr = g_hookPtr2->trampoline();
}

void Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::Unhook()
{
    g_hookPtr1.reset();
    g_hookPtr2.reset();
}

void Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::OnRegisterBefore(const std::string& script)
{
    g_beforeHandler = script;
}

void Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::OnRegisterAfter(const std::string& script)
{
    g_afterHandler = script;
}

uint32_t Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::RequestParam(const uint32_t id)
{
    static constexpr uint32_t EXAMINEE = 1;

    uint32_t out = OBJECT_INVALID;

    switch (id)
    {
        case EXAMINEE:
        {
            if (g_examinee != nullptr)
            {
                out = g_examinee->ObjectID;
            }

            break;
        }
    }

    return out;
}

void Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData::MidHookCallback()
{
    if (!g_afterHandler.empty())
    {
        CExoString script = g_afterHandler.c_str();
        g_pVirtualMachine->RunScript(&script, g_examiner->GetGameObject()->ObjectID, 1);
    }
}

void Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData__Hook(CNWSMessage* thisPtr,
    CNWSPlayer* examiner, uint32_t examineeId)
{
    g_examiner = examiner;
    g_examinee = reinterpret_cast<CNWSObject*>(g_pAppManager->ServerExoApp->GetGameObject(examineeId));

    if (!g_beforeHandler.empty())
    {
        CExoString script = g_beforeHandler.c_str();
        g_pVirtualMachine->RunScript(&script, examiner->GetGameObject()->ObjectID, 1);
    }

    return g_hookPtr1->callOriginal<CallingConvention::ThisCall, void>(thisPtr, examiner, examineeId);
}

void Hooks::CNWSMessage__SendServerToPlayerExamineGui_CreatureData__Hook1()
{
    __asm__ __volatile__
    (
        "leave;" // Leave stack frame created by this function -- wouldn't need if we had __declspec(naked)
    );

    MidHookCallback();

    __asm__ __volatile__
    (
        "push %0;" // Trampoline address.
        "ret;"
        : // No outputs
        : "m" (g_skipAddr)
        : // No clobbers
    );
}