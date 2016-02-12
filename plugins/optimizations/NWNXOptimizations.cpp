#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/param.h>

#include "NWNXOptimizations.h"

#include "Console.h"
#include "hooks/TickRate.h"
#include "hooks/RunScriptCallback.h"
#include "hooks/AIActionSit.h"
#include "hooks/HrTimer.h"

CNWNXOptimizations::CNWNXOptimizations()
{
    confKey = "OPTIMIZATIONS";
}

bool CNWNXOptimizations::OnCreate(gline* config, const char* LogDir)
{
    char log[128];
    bool validate = true, startServer = true;

    // call the base class function
    sprintf(log, "%s/nwnx_optimizations.txt", LogDir);
    if (!CNWNXBase::OnCreate(config, log))
        return false;

    if (!nwnxConfig->exists(confKey)) {
        printf("You really ought to configure nwnx_optimizations before running it.\n");
        exit(1);
    }

    HookHrTimer();

    HookConsole();

    if ((*nwnxConfig)[confKey]["hook_tick_rate"] == "1") {
        HookTickRate();

        uint32_t highTick = 33;
        uint32_t lowTick = 3;

        if (!(*nwnxConfig)[confKey]["tick_rate_target_high"].empty())
            highTick = atoi((*nwnxConfig)[confKey]["tick_rate_target_high"].c_str());
        if (!(*nwnxConfig)[confKey]["tick_rate_target_low"].empty())
            lowTick = atoi((*nwnxConfig)[confKey]["tick_rate_target_low"].c_str());

        SetTargetTickRates(highTick, lowTick);
    }

    HookRunScriptCallback();

    if ((*nwnxConfig)[confKey]["hook_ai_action_sit"] == "1")
        HookAIActionSit();

    return true;
}

char* CNWNXOptimizations::OnRequest(char* gameObject, char* Request, char* Parameters)
{
    Log(2, "Request: \"%s\"\n", Request);
    Log(2, "Params:  \"%s\"\n", Parameters);

    return NULL;
}
