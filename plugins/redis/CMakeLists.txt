cmake_policy(SET CMP0015 NEW)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O2")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -O2")

include_directories(hiredis/)
link_directories(hiredis/)

add_module(redis
	hiredis/hiredis
	hiredis/net
	hiredis/read
	hiredis/sds
	hiredis/dict
	hiredis/async

	plugin-redis

	NWNXRedis
	NWNXRedisRequest

	RedisConnection
	RedisNWNInterface
	RedisPubsub
	RedisResman
	RedisSCO
)
