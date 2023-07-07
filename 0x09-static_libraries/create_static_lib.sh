#!/bin/bash
gcc -c *.c -o *.o
ar -rc liball.a *.o
ranlib liball.a
