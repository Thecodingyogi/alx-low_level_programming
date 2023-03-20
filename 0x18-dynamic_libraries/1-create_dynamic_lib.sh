#!/usr/bin/bash
gcc -Wall -c -fPIC *.c
gcc -Wall -shared -o liball.so *.o
