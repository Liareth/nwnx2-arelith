#ifndef NWNX_ARELITH_ERRORS_HPP_
#define NWNX_ARELITH_ERRORS_HPP_

#include "NWNXBase.h"
#include <memory>

class NWNXArelithErrors final : public CNWNXBase
{
public:
    NWNXArelithErrors();
    virtual ~NWNXArelithErrors();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
};

#endif // NWNX_ARELITH_ERRORS_HPP_