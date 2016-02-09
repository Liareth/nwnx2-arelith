#ifndef NWNX_ARELITH_STEALTH_CNWSCREATURE__SETSTEALTHMODEHIPS_HPP_
#define NWNX_ARELITH_STEALTH_CNWSCREATURE__SETSTEALTHMODEHIPS_HPP_

#include "FunctionHook.hpp"
#include <memory>

class CNWSCreature;

namespace Hooks
{
    namespace CNWSCreature__SetStealthModeHIPS
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;
        extern std::string g_handler;
        extern bool g_shouldSkip;

        void Hook();
        void Unhook();

        void OnRegister(const std::string& script);
        void OnSetSkipHIPS(const bool state);

        bool MidHookShouldSkipHIPS();
    }

    void CNWSCreature__SetStealthModeHIPS__Hook();
}

#endif // NWNX_ARELITH_STEALTH_CNWSCREATURE__SETSTEALTHMODEHIPS_HPP_