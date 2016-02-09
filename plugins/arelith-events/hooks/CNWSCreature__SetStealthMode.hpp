#ifndef NWNX_ARELITH_STEALTH_CNWSCREATURE__SETSTEALTHMODE_HPP_
#define NWNX_ARELITH_STEALTH_CNWSCREATURE__SETSTEALTHMODE_HPP_

#include "FunctionHook.hpp"
#include <memory>
#include <string>

class CNWSCreature;

namespace Hooks
{
    namespace CNWSCreature__SetStealthMode
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;
        extern std::string g_enterHandler;
        extern std::string g_exitHandler;

        void Hook();
        void Unhook();

        void OnRegisterEnter(const std::string& script);
        void OnRegisterExit(const std::string& script);
    }

    void CNWSCreature__SetStealthMode__Hook(CNWSCreature* thisPtr, const uint8_t mode);
}

#endif // NWNX_ARELITH_STEALTH_CNWSCREATURE__SETSTEALTHMODE_HPP_