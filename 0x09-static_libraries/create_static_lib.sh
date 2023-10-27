#!/bib/bash
# generates object files
gcc -Wall -pendantic -Wextra -Werror -std=gnu89 -c *.c
# creates the static library
ar rc liball.a *.o
# index library
ranlib liball.a
