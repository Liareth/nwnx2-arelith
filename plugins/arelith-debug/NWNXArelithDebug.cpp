#include "NWNXArelithDebug.hpp"
#include "NWNXApi.h"

NWNXArelithDebug::NWNXArelithDebug()
{
    confKey = "ARELITH_DEBUG";
}

NWNXArelithDebug::~NWNXArelithDebug()
{
}

bool NWNXArelithDebug::OnCreate(gline* config, const char* logDir)
{
    char logBuffer[128];
    sprintf(logBuffer, "%s/nwnx_arelith_debug.txt", logDir);

    if (!CNWNXBase::OnCreate(config, logBuffer))
    {
        return false;
    }

    Log(0, "NWNX Arelith Debug loaded    \n");
    Log(0, "http://www.arelith.com       \n");
    Log(0, "(c) Scholar Midnight 2016    \n");
    Log(0, "---------------------------- \n");

    return true;
}

char* NWNXArelithDebug::OnRequest(char* gameObject, char* request, char* params)
{
    const std::string requestStr(request);

    if (requestStr.find("GET_INSTRUCTION_COUNT") != std::string::npos)
    {
        CVirtualMachine* g_pVirtualMachine = *(CVirtualMachine **) 0x0832F1EC;
        std::string instructionCountStr = std::to_string(g_pVirtualMachine->InstructionsExecuted);
        char* instructionsCountAsCharArr = new char[instructionCountStr.size() + 1];
        instructionCountStr.copy(instructionsCountAsCharArr, instructionCountStr.size());
        instructionsCountAsCharArr[instructionCountStr.size()] = '\0';
        return instructionsCountAsCharArr;
    }

    return nullptr;
}