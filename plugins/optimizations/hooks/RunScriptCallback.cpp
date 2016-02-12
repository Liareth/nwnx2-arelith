#include "../NWNXOptimizations.h"

void HookRunScriptCallback()
{
    // nops the call to CNWVirtualMachineCommands::RunScriptCallback
    // A function that does nothing except eat cpu cycles.
    NOP(0x08262192, 3);
}