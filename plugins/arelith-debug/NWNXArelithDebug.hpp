#ifndef NWNX_ARELITH_DEBUG_HPP_
#define NWNX_ARELITH_DEBUG_HPP_

#include "NWNXBase.h"

class NWNXArelithDebug final : public CNWNXBase
{
public:
    NWNXArelithDebug();
    virtual ~NWNXArelithDebug();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
};

#endif // NWNX_ARELITH_DEBUG_HPP_