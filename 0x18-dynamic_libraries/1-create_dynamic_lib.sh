#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror -std=gnu89 -fPIC -c *.c
gcc -shared -o liball.so *.o
