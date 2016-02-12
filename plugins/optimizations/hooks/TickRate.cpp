#include "../NWNXOptimizations.h"
#include "core/Profile.h"

using namespace std;

// This optimises AI updates on the server without penalising networking;
// Nearly all of all server load is in AIMaster::UpdateState; so we just
// throttle this to never exceed tickrate calls per second! Since we can't
// sleep here or we'd block the main loop, we just skip calling it if the
// delay since last is smaller than our desired ms.

static uint32_t desiredTickRateHigh = 33;
static uint32_t desiredTickRateLow = 3;

static uint32_t currentTickRate = 0;

// usec
static uint32_t lastAIUpdateTime = 0;

static void CServerAIMaster__UpdateState(CServerAIMaster* aiMaster)
{
    const auto playerCount = g_pAppManager->ServerExoApp->Internal->
                             ClientsList->Count();

    currentTickRate = playerCount > 0 ? desiredTickRateHigh :
                      desiredTickRateLow;

    const auto tickInterval =
        static_cast<int>(1000.0f / static_cast<float>(currentTickRate));

    static chrono::time_point<chrono::high_resolution_clock> last_at =
        chrono::high_resolution_clock::now();

    const auto now = chrono::high_resolution_clock::now();

    const auto diff = chrono::duration_cast<chrono::milliseconds>(now - last_at).
                      count();

    if (diff >= tickInterval) {
        lastAIUpdateTime = Profile::measure([&]() { aiMaster->UpdateState(); }) / 1000;

        last_at = now;

    } else
        lastAIUpdateTime = 0;
}

void MainLoop__usleep_Hook()
{
    // Substract the time we took for AI looping, down to 0.
    constexpr uint32_t max_sleep = 10000u;
    const auto val = max_sleep -
                     std::max(0u, std::min(max_sleep, lastAIUpdateTime));

    usleep(val);
}

void HookTickRate()
{
    NX_HOOK_CALL(0x080a052b, CServerAIMaster__UpdateState);

    NX_HOOK_CALL(0x0804BBF6, MainLoop__usleep_Hook);
}

void SetTargetTickRates(uint32_t hi, uint32_t lo)
{
    desiredTickRateHigh = hi;
    desiredTickRateLow = lo;
}

uint32_t GetTargetTickRate()
{
    return desiredTickRateHigh;
}

uint32_t GetTargetTickRateLow()
{
    return desiredTickRateLow;
}

uint32_t GetCurrentTickRate()
{
    return currentTickRate;
}

