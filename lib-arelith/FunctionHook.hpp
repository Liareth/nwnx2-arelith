#ifndef NWNX_UNIFIED__FUNCTION_HOOK_HPP
#define NWNX_UNIFIED__FUNCTION_HOOK_HPP

#include "CallingConvention.hpp"
#include <array>
#include <cstdint>
#include <string>

class FunctionHook final
{
public: // Structures
    struct Info
    {
        std::string hookName;
        uintptr_t originalAddr;
        uintptr_t newAddr;
    };

private: // Structures
    // Technically a uintptr_t is what we need here, because trampoline length
    // can be up to the size of a pointer. But it looks confusing, so make a type.
    using RetSizeType = uintptr_t;

    enum class MemProtectionFlags
    {
        READ_EXECUTE,
        READ_WRITE_EXECUTE
    };

public:
    FunctionHook(const std::string& hookName, uintptr_t originalFunction,
        uintptr_t newFunction);

    FunctionHook(const std::string& hookName, uintptr_t originalFunction,
        uintptr_t newFunction, const RetSizeType length);

    ~FunctionHook();

    template <typename Convention, typename Ret, typename ... Params>
    Ret callOriginal(Params ... args);

    template <typename Convention, typename ... Params>
    void callOriginal(Params ... args);

    template <typename Convention, typename Ret, typename ... Params>
    Ret callOriginalSafely(Params ... args);

    template <typename Convention, typename ... Params>
    void callOriginalSafely(Params ... args);

    uintptr_t oldFunction() const;
    uintptr_t trampoline() const;
    const Info& hookInfo() const;

private:
    // Array length holding the old function in memory.
    static constexpr RetSizeType TRAMPOLINE_SIZE = 24;

    // Minimum length to copy over.
    static constexpr RetSizeType MIN_RET_SIZE = 6;

    // Maximum length to RetSizeType over.
    static constexpr uint32_t MAX_LENGTH = TRAMPOLINE_SIZE - MIN_RET_SIZE;

    std::array<uint8_t, MAX_LENGTH> m_oldFunction;
    std::array<uint8_t, TRAMPOLINE_SIZE> m_trampoline;

    RetSizeType m_length;
    Info m_info;

    void hook() const;
    void hookFast() const;
    void setPageFlags(const uintptr_t address, const MemProtectionFlags flags) const;
    void restore() const;
    void restoreFast() const;
    void copyOriginal();
    void constructTrampoline();
    void correctRelativeAddresses();
    RetSizeType getSmallestRetLength(const uintptr_t address);
};

template <typename Convention, typename Ret, typename ... Params>
Ret FunctionHook::callOriginal(Params ... args)
{
    using FuncPtrType = decltype(Convention::template pointerValue<Ret, Params ...>());
    FuncPtrType funcPtr = reinterpret_cast<FuncPtrType>(m_trampoline.data());
    return funcPtr(args ...);
}

template <typename Convention, typename ... Params>
void FunctionHook::callOriginal(Params ... args)
{
    using FuncPtrType = decltype(Convention::template pointerValue<void, Params ...>());
    FuncPtrType funcPtr = reinterpret_cast<FuncPtrType>(m_trampoline.data());
    funcPtr(args ...);
}

template <typename Convention, typename Ret, typename ... Params>
Ret FunctionHook::callOriginalSafely(Params ... args)
{
    using FuncPtrType = decltype(Convention::template pointerValue<Ret, Params ...>());
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_WRITE_EXECUTE);
    restoreFast();
    FuncPtrType funcPtr = reinterpret_cast<FuncPtrType>(m_info.originalAddr);
    Ret retVal = funcPtr(args ...);
    hookFast();
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_EXECUTE);
    return retVal;
}

template <typename Convention, typename ... Params>
void FunctionHook::callOriginalSafely(Params ... args)
{
    using FuncPtrType = decltype(Convention::template pointerValue<void, Params ...>());
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_WRITE_EXECUTE);
    restoreFast();
    FuncPtrType funcPtr = reinterpret_cast<FuncPtrType>(m_info.originalAddr);
    funcPtr(args ...);
    hookFast();
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_EXECUTE);
}

#endif // NWNX_UNIFIED__FUNCTION_HOOK_HPP