#include "CGameObjectArray__Delete__1.hpp"
#include "CGameObjectArray.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CGameObjectArray__Delete__1;

std::unique_ptr<FunctionHook> Hooks::CGameObjectArray__Delete__1::g_hookPtr;

void Hooks::CGameObjectArray__Delete__1::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CGameObjectArray::Delete__1",
        Functions::CGameObjectArray__Delete__1,
        getFuncAddr(&CGameObjectArray__Delete__1__Hook));
}

void Hooks::CGameObjectArray__Delete__1::Unhook()
{
    g_hookPtr.reset();
}

uint32_t Hooks::CGameObjectArray__Delete__1__Hook(::CGameObjectArray* thisPtr, uint32_t objId, CGameObject** object)
{
    const uint32_t ret = g_hookPtr->callOriginal<CallingConvention::ThisCall, uint32_t>(thisPtr, objId, object);
    CGameObjectArray::g_objectMap.Remove(objId);
    return ret;
}