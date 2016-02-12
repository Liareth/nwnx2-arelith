#include "../NWNXOptimizations.h"

static int64_t highResolutionTimer = 0;

static int64_t (*CExoTimers__GetHighResolutionTimer)(unsigned long pTimer);
static int64_t CExoTimers__GetHighResolutionTimer_hook(unsigned long pTimer)
{
    return highResolutionTimer;
}

static int eventMainLoopBefore(uintptr_t p)
{
    highResolutionTimer = CExoTimers__GetHighResolutionTimer(g_pExoBase->CExoTimers);
    return 0;
}

void HookHrTimer()
{
    HookEvent(EVENT_CORE_PLUGINSLOADED, [](uintptr_t) -> int {
        HookEvent(EVENT_CORE_MAINLOOP_BEFORE, eventMainLoopBefore);
        return 0;
    });

    NX_HOOK(CExoTimers__GetHighResolutionTimer, 0x082d1d50,
            CExoTimers__GetHighResolutionTimer_hook, 6);
}