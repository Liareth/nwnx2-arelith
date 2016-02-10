#ifndef NWNX_ARELITH_ADMIN_HPP_
#define NWNX_ARELITH_ADMIN_HPP_

#include "NWNXBase.h"

class NWNXArelithAdmin final : public CNWNXBase
{
public:
    NWNXArelithAdmin();
    virtual ~NWNXArelithAdmin();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
};

#endif // NWNX_ARELITHADMING_HPP_