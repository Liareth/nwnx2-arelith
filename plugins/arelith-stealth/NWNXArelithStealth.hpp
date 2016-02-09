#ifndef NWNX_ARELITH_STEALTH_HPP_
#define NWNX_ARELITH_STEALTH_HPP_

#include "NWNXBase.h"

class NWNXArelithStealth final : public CNWNXBase
{
public:
    NWNXArelithStealth();
    virtual ~NWNXArelithStealth();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
};

#endif // NWNX_ARELITH_STEALTH_HPP_