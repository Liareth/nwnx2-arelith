#include "NWNXRedis.h"

#include <math.h>

char *CNWNXRedis::redisReplyToGameStr(redisReply *reply)
{
	char *result = NULL;

	// TYPE strlen(result) RESULT
	// RESULT is
	// - for arrays: sizeof(array) strlen(value1) value1 [..]
	// - for strings: strlen(value) value
	// - for integers: strlen(value) value
	// - for errors: strlen(error) error
	// - for nil: // nothing
	switch (reply->type) {
		case REDIS_REPLY_INTEGER: {
			int intlen = (reply->integer == 0 ? 1 :
						  ((int)(log10(fabs(reply->integer)) + 1) + (reply->integer < 0 ? 1 : 0)));

			asprintf(&result, "%d %d %lld", reply->type, intlen, reply->integer);
			break;
		}

		case REDIS_REPLY_ARRAY: {
			std::string arr;

			for (size_t i = 0; i < reply->elements; i++) {
				std::string elem;

				if (reply->element[i]->type == REDIS_REPLY_INTEGER)
					elem.append(std::to_string(reply->element[i]->integer));
				else
					elem.append(reply->element[i]->str);

				arr.append(std::to_string(elem.length()));
				arr.append(" ");
				arr.append(elem);

				if (i < reply->elements - 1) arr.append(" ");
			}

			int intlen = (reply->elements == 0 ? 1 : (int)(log10(reply->elements) + 1));

			asprintf(&result, "%d %d %d %s", reply->type, intlen + 1 + arr.length(),
					 reply->elements, arr.c_str());
			break;
		}

		case REDIS_REPLY_ERROR:
			Log(0, "Error: %s while\n", reply->str);

		case REDIS_REPLY_STRING:
		default:
			asprintf(&result, "%d %d %s", reply->type, reply->len, reply->str);
			break;
	}

	return result;
}
