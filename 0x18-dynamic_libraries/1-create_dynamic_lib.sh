#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -Wl,-sonam,liball.so - o liball.so *.o
