#ifndef NWNX_ARELITH_MONITORING_HPP_
#define NWNX_ARELITH_MONITORING_HPP_

#include "NWNXBase.h"

class NWNXArelithMonitoring final : public CNWNXBase
{
public:
    NWNXArelithMonitoring();
    virtual ~NWNXArelithMonitoring();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
};

#endif // NWNX_ARELITHMONITORINGG_HPP_