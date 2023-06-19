#!/bin/bash
gcc -shared -o mylibrary.so gmm.c
LD_PRELOAD=./mylibrary.so
