all: main main2

main: main.c string_utilities.c string_utilities.h
	gcc -o main main.c string_utilities.c

main2: main2.c string_utilities.c string_utilities.h
	gcc -o main2 main2.c string_utilities.c

clean:
	rm -f main main2
