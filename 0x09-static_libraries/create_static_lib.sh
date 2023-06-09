#!/bin/bash

# Compile the .c files and create corresponding .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# List the contents of the library to verify
ar -t liball.a
