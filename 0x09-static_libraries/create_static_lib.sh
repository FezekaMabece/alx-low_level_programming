#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar rc liball.a *.o
/** a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory. */
