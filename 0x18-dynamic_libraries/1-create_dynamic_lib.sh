#!/bin/bash
gcc -c -liball *.c
gcc -shared -o liball.so *.o