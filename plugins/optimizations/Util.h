#pragma once

#include <unistd.h>

// Puts a nopsled at the given address, with the given length.
inline void NOP(const uintptr_t address, const size_t length)
{
    const uint32_t pageSize = sysconf(_SC_PAGESIZE);
    const uint32_t pages =  1 + (length / pageSize);
    nx_hook_enable_write((void*) address, pages);
    memset(reinterpret_cast<void*>(address), 0x90, length);
}
