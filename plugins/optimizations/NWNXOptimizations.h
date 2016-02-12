#pragma once

#include "NWNXBase.h"
#include "NWNXApi.h"
#include "Util.h"

class CNWNXOptimizations : public CNWNXBase
{

public:
    CNWNXOptimizations();
    bool OnCreate(gline *config, const char* LogDir);
    char* OnRequest(char* gameObject, char* Request, char* Parameters);
};

extern CNWNXOptimizations plugin;
