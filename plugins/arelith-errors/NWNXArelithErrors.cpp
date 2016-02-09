#include "NWNXArelithErrors.hpp"
#include "hooks/CNWVirtualMachineCommands__ReportError.hpp"

NWNXArelithErrors::NWNXArelithErrors()
{
    confKey = "ARELITH_ERRORS";
}

NWNXArelithErrors::~NWNXArelithErrors()
{
}

bool NWNXArelithErrors::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_errors.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith Errors loaded   \n");
    Log(0, "http://www.arelith.com       \n");
    Log(0, "(c) Scholar Midnight 2016    \n");
    Log(0, "---------------------------- \n");

    Hooks::CNWVirtualMachineCommands__ReportError::Hook();

    return true;
}

char* NWNXArelithErrors::OnRequest(char* gameObject, char* request, char* params)
{
    return nullptr;
}