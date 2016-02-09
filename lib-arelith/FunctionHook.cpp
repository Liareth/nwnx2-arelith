#include "FunctionHook.hpp"
#include "BeaEngine.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <cstring>
    #include <sys/mman.h>
#endif

#include <cassert>

FunctionHook::FunctionHook(const std::string& hookName, uintptr_t originalFunction,
    uintptr_t newFunction)
    : FunctionHook(hookName, originalFunction, newFunction, getSmallestRetLength(originalFunction))
{
}

FunctionHook::FunctionHook(const std::string& hookName, uintptr_t originalFunction,
    uintptr_t newFunction, const RetSizeType length)
    : m_oldFunction(), m_trampoline(), m_length(length)
{
    assert(m_length >= MIN_RET_SIZE && m_length < MAX_LENGTH);

    m_info.hookName = hookName;
    m_info.originalAddr = originalFunction;
    m_info.newAddr = newFunction;

    copyOriginal();
    constructTrampoline();
    hook();
}

FunctionHook::~FunctionHook()
{
    restore();
}

uintptr_t FunctionHook::oldFunction() const
{
    return reinterpret_cast<uintptr_t>(m_oldFunction.data());
}

uintptr_t FunctionHook::trampoline() const
{
    return reinterpret_cast<uintptr_t>(m_trampoline.data());
}

const FunctionHook::Info& FunctionHook::hookInfo() const
{
    return m_info;
}

void FunctionHook::hook() const
{
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_WRITE_EXECUTE);
    hookFast();
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_EXECUTE);
}

void FunctionHook::hookFast() const
{
    std::array<uint8_t, MIN_RET_SIZE> tempPushRet =
    {
        0x68, // PUSH
        0x90, 0x90, 0x90, 0x90, // NOOP x4 (will hold address)
        0xC3 // RET
    };

    // Correct the address to point to the hook landing.
    uint32_t* address = reinterpret_cast<uint32_t*>(tempPushRet.data() + 1);
    *address = m_info.newAddr;

    // Write the hook.
    memcpy(reinterpret_cast<uint8_t*>(m_info.originalAddr), tempPushRet.data(), tempPushRet.size());
}

void FunctionHook::setPageFlags(const uintptr_t address, const MemProtectionFlags flags) const
{
#ifdef _WIN32
    DWORD platformFlags = 0x0;

    if (flags == MemProtectionFlags::READ_EXECUTE)
    {
        platformFlags = PAGE_EXECUTE_READ;
    }
    else if (flags == MemProtectionFlags::READ_WRITE_EXECUTE)
    {
        platformFlags = PAGE_EXECUTE_READWRITE;
    }

    DWORD oldProtect;
    VirtualProtect(reinterpret_cast<void*>(address), MAX_LENGTH, platformFlags, &oldProtect);
#else
    const int PAGE_SIZE = 4096;

    // Align the address to a page boundary.
    const uint8_t* originalAddress = reinterpret_cast<uint8_t*>(address);
    uint8_t* page = reinterpret_cast<uint8_t*>(address);
    page = reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(page) + PAGE_SIZE - 1) & ~(PAGE_SIZE - 1));
    page -= PAGE_SIZE;

    int platformFlags = 0x0;

    if (flags == MemProtectionFlags::READ_EXECUTE)
    {
        platformFlags = PROT_READ | PROT_EXEC;
    }
    else if (flags == MemProtectionFlags::READ_WRITE_EXECUTE)
    {
        platformFlags = PROT_WRITE | PROT_READ | PROT_EXEC;
    }

    mprotect(page, (originalAddress - page) + MAX_LENGTH, platformFlags);
#endif
}

void FunctionHook::restore() const
{
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_WRITE_EXECUTE);
    restoreFast();
    setPageFlags(m_info.originalAddr, MemProtectionFlags::READ_EXECUTE);
}

void FunctionHook::restoreFast() const
{
    // Copy the original function back to where it was.
    memcpy(reinterpret_cast<void*>(m_info.originalAddr), m_oldFunction.data(), MIN_RET_SIZE);
}

void FunctionHook::copyOriginal()
{
    memcpy(m_oldFunction.data(), reinterpret_cast<uint8_t*>(m_info.originalAddr), m_length);
}

void FunctionHook::constructTrampoline()
{
    // Copy the old function into the trampline.
    std::copy(m_oldFunction.begin(), m_oldFunction.end(), m_trampoline.begin());

    // Correct relative addresses.
    correctRelativeAddresses();

    // Add the jump back to "original function + length".
    std::array<uint8_t, MIN_RET_SIZE> tempPushRet =
    {
        0x68, // PUSH
        0x90, 0x90, 0x90, 0x90, // NOOP x4 (will hold address)
        0xC3 // RET
    };

    // Write the address in the space of the noops.
    uint32_t* address = reinterpret_cast<uint32_t*>(tempPushRet.data() + 1);
    *address = m_info.originalAddr + m_length;

    // Copy the push / ret into the trampoline.
    std::copy(tempPushRet.begin(), tempPushRet.end(), m_trampoline.begin() + m_length);

    // We'll set the trampoline page to executable.
    setPageFlags(reinterpret_cast<uintptr_t>(m_trampoline.data()), MemProtectionFlags::READ_WRITE_EXECUTE);
}

void FunctionHook::correctRelativeAddresses()
{
    DISASM disassembler = {};
    disassembler.EIP = reinterpret_cast<uintptr_t>(m_trampoline.data());
    disassembler.VirtualAddr = m_info.originalAddr;

    RetSizeType bytesChecked = 0;

    while (bytesChecked < TRAMPOLINE_SIZE)
    {
        const int len = Disasm(&disassembler);

        if (len == OUT_OF_BLOCK || len == UNKNOWN_OPCODE)
        {
            break;
        }

        static constexpr uint8_t RELATIVE_CALL = 0xE8;
        static constexpr uint8_t RELATIVE_SHORT_JMP = 0xEB;
        static constexpr uint8_t RELATIVE_JMP = 0xE9;

        switch (disassembler.Instruction.Opcode)
        {
            case RELATIVE_CALL:
            case RELATIVE_JMP:
            {
                uint32_t* offset = reinterpret_cast<uint32_t*>(m_trampoline.data() + bytesChecked + 1);
                const uintptr_t originalOffset = *offset;
                const uintptr_t targetAddress = m_info.originalAddr + bytesChecked + len + originalOffset;
                const uintptr_t trampolineAddress = reinterpret_cast<uintptr_t>(m_trampoline.data() + bytesChecked + len);
                *offset = targetAddress + (0xFFFFFFFF - trampolineAddress) + 1;
                break;
            }

            case RELATIVE_SHORT_JMP:
            {
                assert(false); // No short jmp support yet!
                break;
            }
        }

        bytesChecked += len;
        disassembler.EIP += len;
        disassembler.VirtualAddr += len;
    }
}

FunctionHook::RetSizeType FunctionHook::getSmallestRetLength(const uintptr_t address)
{
    DISASM disassembler = {};
    disassembler.EIP = address;

    RetSizeType bytesChecked = 0;

    while (bytesChecked < MAX_LENGTH)
    {
        const int len = Disasm(&disassembler);

        if (len == OUT_OF_BLOCK || len == UNKNOWN_OPCODE)
        {
            return 0;
        }

        bytesChecked += len;

        if (bytesChecked >= MIN_RET_SIZE)
        {
            return bytesChecked;
        }

        disassembler.EIP += len;
    }

    return 0;
}