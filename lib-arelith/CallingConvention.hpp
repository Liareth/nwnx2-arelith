#ifndef NWNX_UNIFIED__CALLING_CONVENTION_HPP
#define NWNX_UNIFIED__CALLING_CONVENTION_HPP

#include "Hooking.hpp"

namespace CallingConvention {

// platformValue == I want a function pointer that calls this convention.
// pointerValue  == I want a function pointer that calls this convention while
//                  allowing me to fully specify all parameters.
// landingValue  == I want a function pointer that points to an acceptable
//                  landing function for this type while allowing me to fully
//                  specify all parameters.

struct CDecl
{
    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_PLATFORM_CDECL * platformValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_POINTER_CDECL * pointerValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_LANDING_CDECL * landingValue())(Params ...);
};

struct ThisCall
{
    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_PLATFORM_THISCALL * platformValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_POINTER_THISCALL * pointerValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_LANDING_THISCALL * landingValue())(Params ...);
};

struct STDCall
{
    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_PLATFORM_STDCALL * platformValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_POINTER_STDCALL * pointerValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_LANDING_STDCALL * landingValue())(Params ...);
};

struct FastCall
{
    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_PLATFORM_FASTCALL * platformValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_POINTER_FASTCALL * pointerValue())(Params ...);

    template <typename Ret, typename ... Params>
    static Ret(NWNX_HOOK_LANDING_FASTCALL * landingValue())(Params ...);
};

}

#endif // NWNX_UNIFIED__CALLING_CONVENTION_HPP