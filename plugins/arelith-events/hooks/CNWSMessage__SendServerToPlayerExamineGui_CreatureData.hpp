#ifndef NWNX_ARELITH_STEALTH_CNWSMESSAGE__SENDSERVERTOPLAYEREXAMINEGUI_CREATUREDATA_HPP_
#define NWNX_ARELITH_STEALTH_CNWSMESSAGE__SENDSERVERTOPLAYEREXAMINEGUI_CREATUREDATA_HPP_

#include "FunctionHook.hpp"
#include <memory>
#include <unordered_map>

class CNWSMessage;
class CNWSPlayer;

namespace Hooks
{
    namespace CNWSMessage__SendServerToPlayerExamineGui_CreatureData
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr1;
        extern std::unique_ptr<FunctionHook> g_hookPtr2;

        extern std::string g_beforeHandler;
        extern std::string g_afterHandler;

        void Hook();
        void Unhook();

        void OnRegisterBefore(const std::string& handler);
        void OnRegisterAfter(const std::string& handler);

        uint32_t RequestParam(const uint32_t id);

        void MidHookCallback();
    }

    void CNWSMessage__SendServerToPlayerExamineGui_CreatureData__Hook(CNWSMessage* thisPtr,
        CNWSPlayer* examiner, uint32_t examineeId);

    void CNWSMessage__SendServerToPlayerExamineGui_CreatureData__Hook1();
}

#endif // NWNX_ARELITH_STEALTH_CNWSMESSAGE__SENDSERVERTOPLAYEREXAMINEGUI_CREATUREDATA_HPP_