# Makefile
CC = gcc
CFLAGS = -Wall -Werror

all: main

main: main.o array_utilities.o
	$(CC) $(CFLAGS) -o main main.o array_utilities.o

main.o: main.c array_utilities.h
	$(CC) $(CFLAGS) -c main.c

array_utilities.o: array_utilities.c array_utilities.h
	$(CC) $(CFLAGS) -c array_utilities.c

clean:
	rm -f *.o main
