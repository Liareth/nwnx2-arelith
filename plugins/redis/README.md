# NWNX Redis

nwnx_redis is a simple redis connector with support for SCO/RCO and pubsub.

## Caveats

### nwnx_redis has some array-result limitations

All array values are squashed into a single string and passed to nwserver as-is. Iterating
very large arrays might run you into performance issues, because the full data
string will need to be copied multiple times on the stack.

Iterating such arrays is very similar to how ODBC2 does it:

 	KEYS("*");
 	while (redisArrayFetch())
		WriteTimestampedLogEntry("iter: " + redisArrayGet());

Please note that redisArrayFetch()/Get() is not cursor-safe (this may change in the future).
Things will break if you next calls (for example, double loops), just like all the GetFirst/GetNext
iterators nwserver provides itself.

### Nested array results (like SCAN)

Nested array results are not supported yet.

### Synchronous

All redis commands are synchronous, even those you do not read the value from;
so your performance strongly depends on latency to your redis server.

### Limited numeric function arguments

Nwscript doesn't support the full width of double and long long with it's
native datatypes. Specifically, all NWScript integers are 32bit.

Most functions perform convenience-casting for you, so if you use integers
wider than 32bit elsewhere and expect to read/write them in NWScript you will
mangle your data. The only way to work around this is to use string values and
never cast them to numerics.

Wrappers that do not cast arguments or return values are provided with a
suffix of _NOCAST, in case you need them.

## Installation

To compile, nwnx_redis will pull in hiredis as a submodule because most distros
provide a outdated libray.

It should be compiled automagically when using CMake.

Afterwards, just copy `nwnx_redis.so` to your nwserver root directory.

There's a sample nss library in [nwnx_redis_core.nss](nwnx_redis_core.nss) and
all commands predefined in [nwnx_redis.nss](nwnx_redis.nss).
There's also a sample event script to get you started with pubsub:
[redis.nss](redis.nss) (This can be configured in nwnx2.ini).

On the serverside it's recommended to [download](http://redis.io) &
compile the latest redis yourself (it's fast and simple) unless your distro
provides a recent version.

## Configuration

See the sample [nwnx2.ini](nwnx2.ini) provided.

## Usage: commands

All [official commands](http://redis.io/commands/) are predefined in
[nwnx_redis.nss](nwnx_redis.nss). (They have been auto-generated with
`./make_includes.sh` - you will need ruby and the docopt gem)

To use, simply `#include "nwnx_redis"` and then call commands as required,
for example:

	SET("test", GetName(OBJECT_SELF));
	string value = HGET("test", "key");

## Usage: pubsub

nwnx_redis supports pubsub-style event handling. First, you need to subscribe
to some channels. *Don't* use `SUBSCIRBE` (because that would lock up your
command connection), use the provided functions instead, which operate on a
second connection:

	void redisSubscribe(string channel, int wildcard = 0);
	void redisUnsubscribe(string channel, int wildcard = 0);

Documentation for those can be found in [nwnx_redis_core.nss](nwnx_redis_core.nss).

Once you've subscribed to some channels (for example, in module_load),
arriving messages will trigger a execution of the script you have configured
in `pubsubscript`. In this, you can use `redisGetEventChannel()` and
`redisGetEventMessage()` to get the relevant parts of the arriving message.

You can easily saturate your nwserver into oblivion with careless amounts of
pubsub traffic, so care needs to be taken in not subscribing to excessively busy
channels. Each arriving message incurs a round trip to the NWScript VM, which can easily
slow down or lag out your server.

## Usage: resman

nwnx_redis allows loading game resources from redis, instead from your module file.

This requires a recent `nwnx_resman.so` to be loaded and functional
(which provides the hooks).

Just configure `resmanPrefix` in your [nwnx2.ini](nwnx2.ini) as given in the
example config, and nwnx_redis.so will automagically provide resources for
which keys exist.

This is interopable with all other plugins that depend on resman for loading data,
like `nwnx_areas`.

## Usage: SCO/RCO

Likewise, nwnx_redis allows usage of SCO/RCO of ingame objects.

This requires a recent ODBC plugin to be present and functional
(which provides the hooks). nwnx_redis supports all object types that nwnx_odbc
supports (items, creatures, placeables, stores and triggers at the time of writing).

See redisSCO and redisRCO in [nwnx_redis_core.nss](nwnx_redis_core.nss) for
documentation.
