#include "CNWSCreature__DoStealthDetection.hpp"
#include "Functions.hpp"
#include "NWNXApi.h"

using namespace Hooks;
using namespace Hooks::CNWSCreature__DoStealthDetection;

std::unique_ptr<FunctionHook> Hooks::CNWSCreature__DoStealthDetection::g_hookPtr;
std::unordered_map<uint32_t, StealthVisibilityInfo> Hooks::CNWSCreature__DoStealthDetection::g_visMap;
std::unordered_map<uint32_t, StealthDetectionInfo> Hooks::CNWSCreature__DoStealthDetection::g_detectMap;

void Hooks::CNWSCreature__DoStealthDetection::Hook()
{
    g_hookPtr = std::make_unique<FunctionHook>(
        "CNWSCreature::DoStealthDetection",
        Functions::CNWSCreature__DoStealthDetection,
        getFuncAddr(&CNWSCreature__DoStealthDetection__Hook));
}

void Hooks::CNWSCreature__DoStealthDetection::Unhook()
{
    g_hookPtr.reset();
}

void Hooks::CNWSCreature__DoStealthDetection::OnReveal(const uint32_t stealther, const uint32_t target)
{
    g_visMap[stealther].m_revealedTo = target;
}

void Hooks::CNWSCreature__DoStealthDetection::OnRevealParty(const uint32_t stealther, const bool state)
{
    g_visMap[stealther].m_revealedToParty = state;
}

void Hooks::CNWSCreature__DoStealthDetection::OnDetectParty(const uint32_t stealther, const bool state)
{
    g_visMap[stealther].m_detectedToParty = state;
}

int32_t Hooks::CNWSCreature__DoStealthDetection__Hook(CNWSCreature* thisPtr, CNWSCreature* otherObject,
    int32_t a2, int32_t* a3, int32_t* listen, int32_t a5)
{
    if (thisPtr->IsPC && otherObject->IsPC && otherObject->GetStealthMode())
    {
        if (thisPtr->GetArea() == otherObject->GetArea()) // Same area
        {
            { // Manual reveal
                auto entry = g_visMap.find(otherObject->ObjectID);

                if (entry != g_visMap.end())
                {
                    StealthVisibilityInfo& visInfo = entry->second;

                    if (visInfo.m_revealedToParty)
                    {
                        if (thisPtr->GetFaction()->GetLeader() == otherObject->GetFaction()->GetLeader()) // Same party
                        {
                            *listen = 1;
                            return 1;
                        }
                    }

                    if (visInfo.m_revealedTo != 0)
                    {
                        if (visInfo.m_revealedTo == thisPtr->ObjectID)
                        {
                            visInfo.m_revealedTo = 0; // Don't sticky.
                            *listen = 1;
                            return 1;
                        }
                    }
                }
            } // End manual reveal
            /*
            { // Party detect
                auto entry = g_detectMap.find(otherObject->ObjectID);

                if (entry != g_detectMap.end())
                {
                    bool reveal = false;

                    for (auto& objId : entry->second.m_detectedBy)
                    {
                        auto entryInVisMap = g_visMap.find(objId);

                        if (entryInVisMap != g_visMap.end() && entry->second.m_detectedToParty) // Detected by someone sharing with party.
                        {
                            // Same area and party as original detector.

                            {
                                // Six seconds after inital spot has passed, and last spot was within six seconds
                                {
                                    bool isShadowdancer = false;
                                    for (int i = 0; i < 3; ++i)
                                    {
                                        auto classInfo = thisPtr->GetStats()->GetClassInfo(i);

                                        if (classInfo != nullptr)
                                        {
                                            if (classInfo->ClassID == 27) // Shadowdancer
                                            {
                                                isShadowdancer = true;
                                                break;
                                            }
                                        }
                                    }

                                    reveal = !isShadowdancer;
                                    break;
                                }
                            }
                        }
                    }
                }
            } // End party detect
            */
        }
    }

    int32_t detected = g_hookPtr->callOriginal<CallingConvention::ThisCall, int32_t>(thisPtr, otherObject, a2, a3, listen, a5);
/*
    if (detected)
    {
        g_detectMap[otherObject->ObjectID].m_detectedBy.insert(otherObject->ObjectID);

        if (g_detectMap[otherObject->ObjectID].m_firstDetected + 6 >= g_detectMap[otherObject->ObjectID].m_lastDetected)
        {
            g_detectMap[otherObject->ObjectID].m_firstDetected + 6 = now;
        }

        g_detectMap[otherObject->ObjectID].m_lastDetected + 6 = now;
    }
    else
    {
        g_detectMap[otherObject->ObjectID].m_detectedBy.erase(otherObject->ObjectID);
    }
*/

    return detected;
}