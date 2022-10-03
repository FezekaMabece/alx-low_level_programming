#!/bin/bash
gcc -Wall -Werror -Wextra -pendatic -c *.c
ar rc liball.a *.o
