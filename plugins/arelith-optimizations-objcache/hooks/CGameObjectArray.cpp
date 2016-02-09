#include "CGameObjectArray.hpp"

#include "hooks/CGameObjectArray__AddInternalObject.hpp"
#include "hooks/CGameObjectArray__AddObjectAtPos.hpp"
#include "hooks/CGameObjectArray__Delete__0.hpp"
#include "hooks/CGameObjectArray__Delete__1.hpp"
#include "hooks/CGameObjectArray__GetGameObject.hpp"

GhettoHashmap<uint32_t, CGameObject*, 256000> Hooks::CGameObjectArray::g_objectMap;

void Hooks::CGameObjectArray::Hook()
{
    Hooks::CGameObjectArray__AddInternalObject::Hook();
    Hooks::CGameObjectArray__AddObjectAtPos::Hook();
    Hooks::CGameObjectArray__Delete__0::Hook();
    Hooks::CGameObjectArray__Delete__1::Hook();
    Hooks::CGameObjectArray__GetGameObject::Hook();
}

void Hooks::CGameObjectArray::Unhook()
{
    Hooks::CGameObjectArray__AddInternalObject::Unhook();
    Hooks::CGameObjectArray__AddObjectAtPos::Unhook();
    Hooks::CGameObjectArray__Delete__0::Unhook();
    Hooks::CGameObjectArray__Delete__1::Unhook();
    Hooks::CGameObjectArray__GetGameObject::Unhook();
}