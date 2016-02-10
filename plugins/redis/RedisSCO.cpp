#include "NWNXRedis.h"

void CNWNXRedis::SetScorcoQuery(char *request)
{
    if (scorcoQuery)
        free(scorcoQuery);

    scorcoQuery = (char *) malloc(strlen(request) + 1);
    Log(2, "o Got request (scorco): %s\n", scorcoQuery);
    memcpy(scorcoQuery, request, strlen(request));
    scorcoQuery[strlen(request)] = 0;
}

int CNWNXRedis::WriteSCO(uintptr_t p)
{
    ODBCSCORCOEvent *s = (ODBCSCORCOEvent *) p;

    if (strncmp(s->key, "REDIS", 5) != 0)
        return 0;

    redisReply *reply = NULL;

    while (reply == NULL) {
        Redis.EnsureConnected();

        reply = (redisReply *) redisCommand(Redis.context, Redis.scorcoQuery, s->pData, s->size);
    }

    freeReplyObject(reply);

    return 1;
}

int CNWNXRedis::ReadSCO(uintptr_t p)
{
    ODBCSCORCOEvent *s = (ODBCSCORCOEvent *) p;

    if (strncmp(s->key, "REDIS", 5) != 0)
        return 0;

    redisReply *reply = NULL;

    while (reply == NULL) {
        Redis.EnsureConnected();

        reply = (redisReply *) redisCommand(Redis.context, Redis.scorcoQuery);
    }

    if (reply->type == REDIS_REPLY_STRING && strstr(reply->str, "V3.2") != NULL) {
        s->pData = (unsigned char *) malloc(reply->len + 1);
        memcpy(s->pData, reply->str, reply->len);
        s->pData[reply->len] = 0;
        s->size = reply->len;

    } else {
        Redis.Log(0, "ERROR: Invalid reply to ReadSCO from database: ");
        Redis.Log(0, "%d %lld %d %s",
                  reply->type, reply->integer, reply->len, reply->str);
    }

    freeReplyObject(reply);

    return 1;
}
