#ifndef NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY__ADDINTERNALOBJECT_HPP_
#define NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY__ADDINTERNALOBJECT_HPP_

#include "FunctionHook.hpp"
#include <memory>

class CGameObjectArray;
class CGameObject;

namespace Hooks
{
    namespace CGameObjectArray__AddInternalObject
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;

        void Hook();
        void Unhook();
    }

    uint32_t CGameObjectArray__AddInternalObject__Hook(::CGameObjectArray* thisPtr, uint32_t* a1, CGameObject* object, int32_t a3);
}

#endif // NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY__ADDINTERNALOBJECT_HPP_