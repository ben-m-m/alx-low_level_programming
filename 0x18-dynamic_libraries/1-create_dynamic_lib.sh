#!/bin/bash
gcc -Wall -fpic *.c
gcc -shared -o liball.so *.o
