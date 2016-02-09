#ifndef NWNX_ARELITH_FUNCS_HPP_
#define NWNX_ARELITH_FUNCS_HPP_

#include "NWNXBase.h"

class NWNXArelithFuncs final : public CNWNXBase
{
public:
    NWNXArelithFuncs();
    virtual ~NWNXArelithFuncs();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
};

#endif // NWNX_ARELITHFUNCSG_HPP_