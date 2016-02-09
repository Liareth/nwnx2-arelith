#ifndef NWNX_ARELITH_ERRORS_REPORT_ERROR_HOOK_HPP_
#define NWNX_ARELITH_ERRORS_REPORT_ERROR_HOOK_HPP_

#include "FunctionHook.hpp"
#include <memory>

class CNWVirtualMachineCommands;
class CExoString;

namespace Hooks
{
    namespace CNWVirtualMachineCommands__ReportError
    {
        extern std::unique_ptr<FunctionHook> g_hookPtr;

        void Hook();
        void Unhook();
    }

    void CNWVirtualMachineCommands__ReportError__Hook(CNWVirtualMachineCommands* vmc,
        CExoString* scriptName, int32_t errId);
}

#endif // NWNX_ARELITH_ERRORS_REPORT_ERROR_HOOK_HPP_