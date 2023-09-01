#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=c99 -c *.c
ar -rc liball.a *.o
