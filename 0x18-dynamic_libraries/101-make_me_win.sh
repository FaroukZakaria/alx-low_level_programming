#!/bin/bash
gcc -shared -o mylibrary.so gm.c
LD_PRELOAD=./mylibrary.so
