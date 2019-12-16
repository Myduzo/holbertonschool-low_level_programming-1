#!/bin/bash
gcc -fPIC -c *.c
gcc -fPIC -shared *.o -o liball.so
