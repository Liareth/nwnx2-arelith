#ifndef NWNX_ARELITH_STEALTH_CNWSCREATURE__REMOVEASSOCIATE_HPP_
#define NWNX_ARELITH_STEALTH_CNWSCREATURE__REMOVEASSOCIATE_HPP_

#include "FunctionHook.hpp"
#include <memory>
#include <unordered_map>

class CNWSCreature;

namespace Hooks
{
    namespace CNWSCreature__RemoveAssociate
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;
        extern std::string g_handler;

        void Hook();
        void Unhook();

        void OnRegister(const std::string& handler);
    }

    void CNWSCreature__RemoveAssociate__Hook(CNWSCreature* thisPtr, uint32_t assocId);
}

#endif // NWNX_ARELITH_STEALTH_CNWSCREATURE__REMOVEASSOCIATE_HPP_