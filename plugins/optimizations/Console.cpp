#include "NWNXOptimizations.h"

#include "hooks/TickRate.h"

using namespace std;

static int OnConsoleInput(uintptr_t p)
{
    auto ev = (CoreConsoleInputEvent*) p;

    string cmd = ev->command;

    if (cmd == "help") {
        printf("opt\n");
        printf("\tShow current optimizations overview.\n");
        printf("opt tickrate <high> <low>\n");
        printf("\tSets new tickrates. Both need to be given.\n");
        return 0;
    }

    else if (cmd == "status") {
        printf("[Optimizations] Tick rate: %d (min: %d, max: %d)\n",
               GetCurrentTickRate(), GetTargetTickRateLow(), GetTargetTickRate());
        return 0;
    }

    else if (cmd != "opt")
        return 0;

    char* arg = strdup(ev->arguments);
    char* subcmd_s = strtok(arg, " ");
    string subcmd = subcmd_s ? subcmd_s : "";
    // char* param_s = strtok(NULL, "");
    // string param = param_s ? param_s : "";

    if (subcmd == "tickrate") {
        char* hi = strtok(NULL, " ");
        char* lo = strtok(NULL, " ");
        if (hi && lo)
            SetTargetTickRates(atoi(hi), atoi(lo));
        else
            printf("Invalid syntax. Try 'help'.\n");
    } else
        printf("Unknown subcommand. Try 'help'.\n");

    free(arg);
    ev->pass = false;
}

void HookConsole()
{
    HookEvent(EVENT_CORE_PLUGINSLOADED, [](uintptr_t) -> int {
        HookEvent(EVENT_CORE_CONSOLE_INPUT, OnConsoleInput);
    });
}

