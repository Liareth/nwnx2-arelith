#ifndef NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY_HPP_
#define NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY_HPP_

#include "GhettoHashmap.hpp"

class CGameObject;

namespace Hooks
{
    namespace CGameObjectArray
    {
        extern GhettoHashmap<uint32_t, CGameObject*, 256000> g_objectMap;

        void Hook();
        void Unhook();
    }
}

#endif // NWNX_ARELITH_STEALTH_CGGAMEOBJECTARRAY_HPP_