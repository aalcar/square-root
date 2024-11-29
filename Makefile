CC := gcc
CFLAGS := -g -Wall -Werror

sqrt.out: main.o sqrt.o
	$(CC) $(CFLAGS) main.o sqrt.o -o sqrt.out
main.o: main.c sqrt.h
sqrt.o: sqrt.c

clean:
	rm *.o *.out