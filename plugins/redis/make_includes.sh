#!/bin/sh
set -e
ruby commands.rb > nwnx_redis.nss
ruby commands.rb --cast=false --postfix=_NOCAST > nwnx_redis_nc.nss