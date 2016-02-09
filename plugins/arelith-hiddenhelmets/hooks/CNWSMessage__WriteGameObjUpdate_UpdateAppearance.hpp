#ifndef NWNX_ARELITH_HIDDENHELMETS_CNWSMESSAGE_WRITEGAMEOBJUPDATE_UPDATEAPPEARANCE_HPP_
#define NWNX_ARELITH_HIDDENHELMETS_CNWSMESSAGE_WRITEGAMEOBJUPDATE_UPDATEAPPEARANCE_HPP_

#include "FunctionHook.hpp"
#include <memory>

class CNWSCreature;
class CNWSItem;

namespace Hooks
{
    namespace CNWSMessage__WriteGameObjUpdate_UpdateAppearance
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr1;
        extern std::unique_ptr<FunctionHook> g_hookPtr2;

        void Hook();
        void Unhook();

        bool IsHelmetHidden(CNWSCreature* creature);
        bool MidHookIsHelmVisible(); // Called mid-hook, cannot use any registers but EAX.
    }

    void CNWSMessage__WriteGameObjUpdate_UpdateAppearance__Hook1();
    void CNWSMessage__WriteGameObjUpdate_UpdateAppearance__Hook2();
}

#endif // NWNX_ARELITH_HIDDENHELMETS_CNWSMESSAGE_WRITEGAMEOBJUPDATE_UPDATEAPPEARANCE_HPP_