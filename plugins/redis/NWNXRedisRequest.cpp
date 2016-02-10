#include "NWNXRedis.h"

char *CNWNXRedis::OnRequest(char *gameObject, char *Request, char *Parameters)
{
    Log(1, "Request: %s\n", Request);

    if (strncmp(Request, "RAW", 3) == 0) {
        redisReply *reply = NULL;

        while (reply == NULL) {
            EnsureConnected();

            reply = (redisReply *) redisCommand(context, Parameters);
        }

        char *result = redisReplyToGameStr(reply);
        freeReplyObject(reply);
        return result;
    }

    if (strncmp(Request, "PUSHEMPTY", 9) == 0) {
        Log(1, "%s: (empty)\n", Request);
        argList.push_back("");
        return NULL;
    }

    if (strncmp(Request, "PUSH", 4) == 0) {
        Log(1, "%s: %s\n", Request, Parameters);

        // Not sure why, but sometimes "Parameters" is NULL. Maybe when you pass in a empty string
        // from nwserver side.
        if (Parameters != NULL)
            argList.push_back(Parameters);
        else
            argList.push_back("");

        return NULL;
    }

    if (strncmp(Request, "CMD", 3) == 0) {
        Log(1, "%s: %s\n", Request, Parameters);

        redisReply *reply = NULL;

        while (reply == NULL) {
            EnsureConnected();

            const char* bb[argList.size()];
            for (size_t i = 0; i < argList.size(); i++)
                bb[i] = argList[i].c_str();

            reply = (redisReply *) redisCommandArgv(context,
                argList.size(), bb, NULL);
        }

        char *result = redisReplyToGameStr(reply);

        argList.clear();

        freeReplyObject(reply);

        Log(2, " => \"%s\"\n", result);
        return result;
    }

    if (strncmp(Request, "PSUBSCRIBE", 10) == 0) {
        while (eventContext == NULL || eventContext->err) {
            printf("REDIS: eventContext is not connected, blocking on PSUBSCRIBE\n");
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        redisAppendCommand(eventContext, "PSUBSCRIBE %s", Parameters);
        int done = 0;

        while (!done) redisBufferWrite(eventContext, &done);

        return NULL;
    }

    if (strncmp(Request, "SUBSCRIBE", 9) == 0) {
        while (eventContext == NULL || eventContext->err) {
            printf("REDIS: eventContext is not connected, blocking on SUBSCRIBE\n");
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        redisAppendCommand(eventContext, "SUBSCRIBE %s", Parameters);
        int done = 0;

        while (!done) redisBufferWrite(eventContext, &done);

        return NULL;
    }

    if (strncmp(Request, "UNSUBSCRIBE", 11) == 0) {
        while (eventContext == NULL || eventContext->err) {
            printf("REDIS: eventContext is not connected, blocking on UNSUBSCRIBE\n");
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        redisAppendCommand(eventContext, "UNSUBSCRIBE %s", Parameters);
        int done = 0;

        while (!done) redisBufferWrite(eventContext, &done);

        return NULL;
    }

    if (strncmp(Request, "PUNSUBSCRIBE", 12) == 0) {
        while (eventContext == NULL || eventContext->err) {
            printf("REDIS: eventContext is not connected, blocking on PUNSUBSCRIBE\n");
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        redisAppendCommand(eventContext, "PUNSUBSCRIBE %s", Parameters);
        int done = 0;

        while (!done) redisBufferWrite(eventContext, &done);

        return NULL;
    }

    if (strncmp(Request, "GETEVCHAN", 9) == 0) {
        char *result = NULL;

        if (pubsubEventChannel != NULL)
            asprintf(&result, "%s", pubsubEventChannel.load());

        return result;
    }

    if (strncmp(Request, "GETEVMSG", 8) == 0) {
        char *result = NULL;

        if (pubsubEventMessage != NULL)
            asprintf(&result, "%s", pubsubEventMessage.load());

        return result;
    }


    if (strncmp(Request, "SETSCORCOQUERY", 9) == 0) {
        SetScorcoQuery(Parameters);
        return NULL;
    }

    return NULL;
}

