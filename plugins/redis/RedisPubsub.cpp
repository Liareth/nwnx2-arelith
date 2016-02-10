#include "NWNXRedis.h"

void CNWNXRedis::redisEventThread()
{
	while (true) {
		if (Redis.eventContext != NULL) {
			redisFree(Redis.eventContext);
			Redis.eventContext = NULL;
		}

		while (true) {
			if (strcmp(Redis.socket, "") != 0)
				Redis.eventContext = redisConnectUnix(Redis.socket);
			else
				Redis.eventContext = redisConnect(Redis.server, Redis.port);

			if (!Redis.eventContext->err)
				break;

			printf("REDIS: Connection error (pubsub): %s, retrying in 1\n", Redis.eventContext->errstr);

			std::this_thread::sleep_for(std::chrono::seconds(1));
		}

		if (strcmp(Redis.subscribe, "") != 0) {
			char *sub = strdup(Redis.subscribe);
			char *tok = strtok(sub, ",");

			while (tok != NULL) {
				printf("REDIS: subscribing to %s\n", tok);
				redisAppendCommand(Redis.eventContext, "PSUBSCRIBE %s", tok);

				tok = strtok(NULL, ",");
			}

            free(sub);
		}

		if (strcmp(Redis.password, "") != 0)
			redisAppendCommand(Redis.eventContext, "AUTH %s", Redis.password);

		if (Redis.dbIdx > 0)
			redisAppendCommand(Redis.eventContext, "SELECT %d", Redis.dbIdx);

		redisReply *reply = NULL;

		while (true) {
			// We're not connected (yet);
			if (Redis.eventContext == NULL || Redis.eventContext->err)
				break;

			if (reply != NULL) {
				freeReplyObject(reply);
				reply = NULL;
			}

			void *rvoid;

			if (REDIS_OK != redisGetReply(Redis.eventContext, &rvoid))
				break;

			if (rvoid == NULL)
				break;

			reply = (redisReply *) rvoid;

			if (reply->type == REDIS_REPLY_ARRAY && (
						(reply->elements == 3 && strncmp(reply->element[0]->str, "message", 7) == 0) ||
						(reply->elements == 4 && strncmp(reply->element[0]->str, "pmessage", 8) == 0)
					)) {

				// pmessage: "pmessage", mask, channel, message
				// message: "message", channel, message
				if (reply->elements == 4) {
					Redis.pubsubEventChannel = reply->element[2]->str;
					Redis.pubsubEventMessage = reply->element[3]->str;

				} else {
					Redis.pubsubEventChannel = reply->element[1]->str;
					Redis.pubsubEventMessage = reply->element[2]->str;
				}

                if (g_pVirtualMachine && g_pAppManager && g_pAppManager->ServerExoApp &&
                        g_pAppManager->ServerExoApp->GetServerMode() == 2) {
    				Mainloop::Now([&]() {
    				    g_pVirtualMachine->RunScript(&Redis.pubsubscript, 0, 1);
    				});
                }

				Redis.pubsubEventChannel = NULL;
				Redis.pubsubEventMessage = NULL;
			}

			else if (reply->type == REDIS_REPLY_ARRAY && (
						 (reply->elements == 3 && strncmp(reply->element[0]->str, "subscribe", 9) == 0) ||
						 (reply->elements == 3 && strncmp(reply->element[0]->str, "psubscribe", 10) == 0)
					 )) {
				// Eat p/subscribe replies.
			}

			else {
				printf("Unhandled reply on pubsub context: %d %lld %d %s\n",
					   reply->type, reply->integer, reply->len, reply->str);

				for (unsigned int i = 0; i < reply->elements; i++)
					printf("  A %d, %s\n", i, reply->element[i]->str);
			}
		}

		if (reply != NULL) {
			freeReplyObject(reply);
			reply = NULL;
		}

		printf("REDIS: eventContext disconnected, retrying (error was: %s)\n",
			   Redis.eventContext->errstr);

		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
