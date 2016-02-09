#ifndef NWNX_ARELITH_HIDDENHELMETS_HPP_
#define NWNX_ARELITH_HIDDENHELMETS_HPP_

#include "NWNXBase.h"

class NWNXArelithHiddenHelmets final : public CNWNXBase
{
public:
    NWNXArelithHiddenHelmets();
    virtual ~NWNXArelithHiddenHelmets();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
};

#endif // NWNX_ARELITH_HIDDENHELMETS_HPP_