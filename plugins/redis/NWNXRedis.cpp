#include "NWNXRedis.h"

CNWNXRedis::CNWNXRedis()
{
	confKey = strdup("REDIS");

	// We reserve 1024 entries in push/pushempty. That should be enough for everyone and
	// the memory tradeoff for lugging around 1024 pointers is worth the theoretical
	// speed boost we get.
	argList.reserve(1024);
}

bool CNWNXRedis::OnCreate(gline *config, const char *LogDir)
{
	char log[128];

	sprintf(log, "%s/nwnx_redis.txt", LogDir);

	if (!CNWNXBase::OnCreate(config, log))
		return false;

	if (!nwnxConfig->exists(confKey)) {
		Log(0, "o Critical Error: Section [%s] not found in nwnx2.ini\n", confKey);
		return false;
	}

	if (!nwnxConfig->exists(confKey, "pubsubscript")) {
		printf("ERROR: You need to set [REDIS] pubsubscript= in nwnx2.ini\n");
		exit(1);
	}

	socket = strdup((char *)((*nwnxConfig)[confKey]["socket"].c_str()));
	server = strdup((char *)((*nwnxConfig)[confKey]["server"].c_str()));
	port = atoi((char *)((*nwnxConfig)[confKey]["port"].c_str()));
	pubsubscript = CExoString(strdup((char *)((*nwnxConfig)[confKey]["pubsubscript"].c_str())));

    resman = atoi((char *)((*nwnxConfig)[confKey]["resman"].c_str()));
	resmanQueryTimestamp = strdup((char *)((*nwnxConfig)[confKey]["resmanQueryTimestamp"].c_str()));
	resmanQueryExists = strdup((char *)((*nwnxConfig)[confKey]["resmanQueryExists"].c_str()));
	resmanQueryGet = strdup((char *)((*nwnxConfig)[confKey]["resmanQueryGet"].c_str()));
	resmanCacheTime = (time_t) atol((char *)((*nwnxConfig)[confKey]["resmanCacheTime"].c_str()));

	password = strdup((char *)((*nwnxConfig)[confKey]["password"].c_str()));
	dbIdx = atoi((char *)((*nwnxConfig)[confKey]["db"].c_str()));
	subscribe = strdup((char *)((*nwnxConfig)[confKey]["subscribe"].c_str()));

	HookEvent(EVENT_CORE_PLUGINSLOADED, OnPluginsLoaded);

	return true;
}

int CNWNXRedis::OnPluginsLoaded(uintptr_t p)
{
	HANDLE handleSCO = HookEvent(EVENT_ODBC_RCO, ReadSCO);
	HANDLE handleRCO = HookEvent(EVENT_ODBC_SCO, WriteSCO);

	if (!handleSCO || !handleRCO) {
		printf("o Warning: Cannot hook SCO/RCO because noone provides "
			   "NWServer/RCO + /SCO.\n");
	}

	Redis.scorcoEnabled = handleRCO && handleRCO;
	Redis.scorcoQuery = (char *) malloc(1024);

    if (Redis.resman) {
    	HANDLE resmanExists;
    	HANDLE resmanDemand;

    	resmanExists = HookEvent(EVENT_RESMAN_EXISTS, ResmanExists);
    	resmanDemand = HookEvent(EVENT_RESMAN_DEMAND, ResmanDemand);

    	if (!resmanExists || !resmanDemand) {
    		printf("* Warning: Cannot hook resman.\n");
    	}
    }

    Redis.EnsureConnected();

	std::thread ev_thread(redisEventThread);
    ev_thread.detach();

	return 0;
}

