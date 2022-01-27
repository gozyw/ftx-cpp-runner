#!/usr/bin/env bash
rm -fr ./bin ./sbin ./var ./include ./lib ./lib64  ./libexec ./share

rpm -ql boost-1.45.0 boost-devel-1.45.0 \
    |tar -T /dev/stdin -cf /dev/stdout|tar -xf /dev/stdin

mv usr/* ./ && rmdir usr
