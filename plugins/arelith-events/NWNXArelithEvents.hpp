#ifndef NWNX_ARELITH_EVENTS_HPP_
#define NWNX_ARELITH_EVENTS_HPP_

#include "NWNXBase.h"

class NWNXArelithEvents final : public CNWNXBase
{
public:
    NWNXArelithEvents();
    virtual ~NWNXArelithEvents();
    bool OnCreate(gline* config, const char* logDir) override;
    char* OnRequest(char* gameObject, char* request, char* params) override;
    unsigned long OnRequestObject(char *gameObject, char* request) override;

private:
    enum class EventTypes
    {
        EVENT_ADD_ASSOCIATE    = 1,
        EVENT_REMOVE_ASSOCIATE = 2,
        EVENT_STEALTH_ENTER    = 3,
        EVENT_STEALTH_EXIT     = 4,
        EVENT_EXAMINE_BEFORE   = 5,
        EVENT_EXAMINE_AFTER    = 6
    };

    EventTypes m_runningEvent;

    uint32_t GetEventParamIDFromString(const std::string& str);
};

#endif // NWNX_ARELITH_EVENTS_HPP_