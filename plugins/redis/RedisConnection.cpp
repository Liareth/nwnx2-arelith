#include "NWNXRedis.h"

void CNWNXRedis::EnsureConnected()
{
	if (context != NULL && !context->err)
		return;

	// Attempt to connect to redis.
	while (true) {
		if (context != NULL)
			redisFree(context);

		if (strcmp(socket, "") != 0)
			context = redisConnectUnix(socket);
		else
			context = redisConnect(server, port);

		if (!context->err)
			break;

		printf("REDIS: Connection error: %s, retrying in 1\n", context->errstr);
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}

	if (strcmp(password, "") != 0)
		freeReplyObject(redisCommand(context, "AUTH %s", password));

	if (dbIdx > 0)
		freeReplyObject(redisCommand(context, "SELECT %d", dbIdx));
}
