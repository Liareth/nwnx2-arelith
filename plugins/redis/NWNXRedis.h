#pragma once

#include "NWNXBase.h"
#include <hiredis.h>
#include <vector>
#include <atomic>
#include <stdio.h>
#include <stdlib.h>
#include "../../api/all.h"
#include "../../include/nx_hook.h"

#include "odmbc/pluginlink.h"
#include "resman/pluginlink.h"

class CNWNXRedis: public CNWNXBase
{
public:
	CNWNXRedis();

	bool OnCreate(gline *nwnxConfig, const char *LogDir = NULL);
	char *OnRequest(char *gameObject, char *Request, char *Parameters);

private:
	// Config
	char *socket;
	char *server;
	char *password;
	char *subscribe;
	int port;
	CExoString pubsubscript;

    bool resman;
	char *resmanQueryTimestamp;
	char *resmanQueryExists;
	char *resmanQueryGet;
	time_t resmanCacheTime;

	int dbIdx;
	// End of config.

	void EnsureConnected();

	redisContext *eventContext;
	redisContext *context;

	void SetScorcoQuery(char *p);

	static size_t ResmanQuerySimple(const char *query, const char *resref, unsigned char **data);

	static int OnPluginsLoaded(uintptr_t p);

	static int ResmanExists(uintptr_t p);
	static int ResmanDemand(uintptr_t p);

	static int ReadSCO(uintptr_t p);
	static int WriteSCO(uintptr_t p);

	static void redisEventThread();

	char *redisReplyToGameStr(redisReply *reply);

	std::atomic<char*> pubsubEventChannel;
	std::atomic<char*> pubsubEventMessage;

	std::vector<std::string> argList;

	bool scorcoEnabled;
	char *scorcoQuery;
};

extern CNWNXRedis Redis;
