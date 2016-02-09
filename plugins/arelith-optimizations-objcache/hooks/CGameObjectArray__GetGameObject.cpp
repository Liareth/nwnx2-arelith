#include "CGameObjectArray__GetGameObject.hpp"
#include "CGameObjectArray.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CGameObjectArray__GetGameObject;

std::unique_ptr<FunctionHook> Hooks::CGameObjectArray__GetGameObject::g_hookPtr;

void Hooks::CGameObjectArray__GetGameObject::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CGameObjectArray::GetGameObject",
        Functions::CGameObjectArray__GetGameObject,
        getFuncAddr(&CGameObjectArray__GetGameObject__Hook));
}

void Hooks::CGameObjectArray__GetGameObject::Unhook()
{
    g_hookPtr.reset();
}

uint32_t Hooks::CGameObjectArray__GetGameObject__Hook(::CGameObjectArray* thisPtr, int32_t objId, CGameObject** object)
{
    auto found = CGameObjectArray::g_objectMap.Find(objId);
    *object = found;
    return !found; // 0 on success, 1 on failure
}