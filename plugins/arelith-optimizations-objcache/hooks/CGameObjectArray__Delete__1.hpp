#ifndef NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY__DELETE__1_HPP_
#define NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY__DELETE__1_HPP_

#include "FunctionHook.hpp"
#include <memory>

class CGameObjectArray;
class CGameObject;

namespace Hooks
{
    namespace CGameObjectArray__Delete__1
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;

        void Hook();
        void Unhook();
    }

    uint32_t CGameObjectArray__Delete__1__Hook(::CGameObjectArray* thisPtr, uint32_t objId, CGameObject** object);
}

#endif // NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY__DELETE__1_HPP_