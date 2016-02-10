#include "NWNXRedis.h"

#include <unordered_map>
#include <string>

size_t CNWNXRedis::ResmanQuerySimple(const char *query, const char *resref,
									 unsigned char **data)
{
	size_t sz = 0;

	redisReply *reply = NULL;

	while (reply == NULL) {
		Redis.EnsureConnected();

		reply = (redisReply *) redisCommand(Redis.context, query, resref);
	}

	switch (reply->type) {
		case REDIS_REPLY_STRING:
			*data = (unsigned char *) malloc(reply->len + 1 /* terminating 0 */);

			if (*data == NULL) {
				printf("ERROR: malloc() for new data failed in ResmanQuerySimple. bail.\n");
				exit(1);
			}

			memcpy(*data, reply->str, reply->len);

			(*data)[reply->len] = 0;

			sz = reply->len;
			break;

		case REDIS_REPLY_INTEGER:
			asprintf((char **) data, "%lld", reply->integer);
			sz = strlen((char *) *data);
			break;

		case REDIS_REPLY_NIL:
			break;

		default:
			printf("Warning: Resman query %s (ref: %s) returned unhandled type %d\n",
				   query, resref, reply->type);
	}

	freeReplyObject(reply);

	return sz;
}

int CNWNXRedis::ResmanExists(uintptr_t p)
{
	ResManExistsEvent *exists = reinterpret_cast<ResManExistsEvent *>(p);

	// See redisCacheTime in nwnx2.ini

	// map<resref, mtime_in_redis>
	static std::unordered_map<std::string, time_t> ExistsCache;
	// map<resref, last_time_hit>
	static std::unordered_map<std::string, time_t> LastTimeHit;

	time_t now = time(NULL);

	if (Redis.resmanCacheTime > 0 &&
            LastTimeHit.find(exists->resRefWithExt) != LastTimeHit.end() &&
			difftime(now, LastTimeHit[exists->resRefWithExt]) < Redis.resmanCacheTime) {

		exists->mtime = ExistsCache[exists->resRefWithExt];
		exists->exists = true;
		return 0;
	}

	char *timeData = NULL;

	size_t sz = ResmanQuerySimple(Redis.resmanQueryTimestamp, exists->resRefWithExt,
								  (unsigned char **) &timeData);

	if (timeData != NULL) {
		time_t redis_mtime = (time_t) atol(timeData);
		Redis.Log(1, "Resources exists: %s, %d\n", exists->resRefWithExt, atol(timeData));

		exists->mtime = std::max(exists->mtime, redis_mtime);
		exists->exists = true;

        if (Redis.resmanCacheTime > 0) {
		    LastTimeHit[exists->resRefWithExt] = now;
		    ExistsCache[exists->resRefWithExt] = redis_mtime;
        }

		free(timeData);
	}

	return 0;
}

int CNWNXRedis::ResmanDemand(uintptr_t p)
{
	ResManDemandEvent *event = reinterpret_cast<ResManDemandEvent *>(p);

	time_t mtime = 0;

	char *timeData = NULL;

	size_t sz = ResmanQuerySimple(Redis.resmanQueryTimestamp, event->resRefWithExt,
								  (unsigned char **) &timeData);

	if (timeData == NULL)
		return 0;

	mtime = atoi(timeData);
	free(timeData);

	if (mtime < event->minimum_mtime)
		return 0;

	sz = ResmanQuerySimple(Redis.resmanQueryGet, event->resRefWithExt, &event->pData);

	event->size = sz;
	Redis.Log(1, "Resman: %s -> Sent %ld bytes\n", event->resRefWithExt, sz);

	return event->pData != NULL;
}
