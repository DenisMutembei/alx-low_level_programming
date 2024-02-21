#!/bin/bash
gcc -shared -o /tmp/winning.so -fPIC /tmp/winning.c
LD_PRELOAD=/tmp/winning.so
