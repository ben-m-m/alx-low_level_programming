#!/bin/bash
gcc *.c -c -fpic
sed gcc *.o -shared -o liball.so
