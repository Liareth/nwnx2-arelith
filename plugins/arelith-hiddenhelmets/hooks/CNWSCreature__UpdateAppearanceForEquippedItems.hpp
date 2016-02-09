#ifndef NWNX_ARELITH_HIDDENHELMETS_CNWSCREATURE__UPDATEAPPEARNCEFOREQUIPPEDITEMS_HPP_
#define NWNX_ARELITH_HIDDENHELMETS_CNWSCREATURE__UPDATEAPPEARNCEFOREQUIPPEDITEMS_HPP_

#include "FunctionHook.hpp"
#include <memory>

class CNWSCreature;

namespace Hooks
{
    namespace CNWSCreature__UpdateAppearanceForEquippedItems
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;

        void Hook();
        void Unhook();
    }

    int32_t CNWSCreature__UpdateAppearanceForEquippedItems__Hook(CNWSCreature* thisPtr);
}

#endif // NWNX_ARELITH_HIDDENHELMETS_CNWSCREATURE__UPDATEAPPEARNCEFOREQUIPPEDITEMS_HPP_