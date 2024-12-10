# How To Use
If you wanna use my version instead of the version included in the math.h library, here's what you need to do:
1. Add the sqrt.c and sqrt.h files to your project directory.
2. Add the line #include "sqrt.h" at the top of the file that requires the sqrt function.
3. Compile your program.
## Example Makefile:
```
CC := gcc
CFLAGS := -g -Wall -Werror

sqrt.out: main.o sqrt.o
  $(CC) $(CFLAGS) main.o sqrt.o -o sqrt.out
main.o: main.c sqrt.h
sqrt.o: sqrt.c
```
