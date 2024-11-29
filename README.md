# How To Use
If you wanna use my version instead of the version included in the math.h library, here's what you need to do:
1. Add the sqrt.c and sqrt.h files to your project directory.
2. Add the line #include "sqrt.h" at the top of the file that requires the sqrt function.
3. Compile your program.
## Example Makefile:
CC := gcc
<br>CFLAGS := -g -Wall -Werror
<br>
<br>sqrt.out: main.o sqrt.o
<br>&nbsp;&nbsp;&nbsp;&nbsp;$(CC) $(CFLAGS) main.o sqrt.o -o sqrt.out
<br>main.o: main.c sqrt.h
<br>sqrt.o: sqrt.c
