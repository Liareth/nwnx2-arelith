#ifndef NWNX_ARELITH_STEALTH_CNWSCREATURE__DOSTEALTHDETECTION_HPP_
#define NWNX_ARELITH_STEALTH_CNWSCREATURE__DOSTEALTHDETECTION_HPP_

#include "FunctionHook.hpp"
#include <memory>
#include <unordered_map>
#include <unordered_set>

class CNWSCreature;

namespace Hooks
{
    namespace CNWSCreature__DoStealthDetection
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;

        struct StealthVisibilityInfo
        {
            uint32_t m_revealedTo;
            bool m_revealedToParty;
            bool m_detectedToParty;
        };

        extern std::unordered_map<uint32_t, StealthVisibilityInfo> g_visMap;

        struct StealthDetectionInfo
        {
            std::unordered_set<uint32_t> m_detectedBy;
            uint32_t m_firstDetected;
            uint32_t m_lastDetected;
        };

        extern std::unordered_map<uint32_t, StealthDetectionInfo> g_detectMap;

        void Hook();
        void Unhook();

        void OnReveal(const uint32_t stealther, const uint32_t target);
        void OnRevealParty(const uint32_t stealther, const bool state);
        void OnDetectParty(const uint32_t stealther, const bool state);
    }

    int32_t CNWSCreature__DoStealthDetection__Hook(CNWSCreature* thisPtr, CNWSCreature* otherObject,
        int32_t a2, int32_t* spot, int32_t* listen, int32_t a5);
}

#endif // NWNX_ARELITH_STEALTH_CNWSCREATURE__DOSTEALTHDETECTION_HPP_