#ifndef NWNX_ARELITH_STEALTH_CNWSCREATURE__ADDASSOCIATE_HPP_
#define NWNX_ARELITH_STEALTH_CNWSCREATURE__ADDASSOCIATE_HPP_

#include "FunctionHook.hpp"
#include <memory>
#include <unordered_map>

class CNWSCreature;

namespace Hooks
{
    namespace CNWSCreature__AddAssociate
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;
        extern std::string g_handler;

        void Hook();
        void Unhook();

        void OnRegister(const std::string& handler);
    }

    void CNWSCreature__AddAssociate__Hook(CNWSCreature* thisPtr, uint32_t assocId, uint16_t a2);
}

#endif // NWNX_ARELITH_STEALTH_CNWSCREATURE__ADDASSOCIATE_HPP_