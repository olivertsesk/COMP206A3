run : main.o list.o
	gcc -o run main.o list.o

main.o : main.c list.h
	gcc -c main.c

list.o : list.c list.h
	gcc -c list.c

clean :
	rm -f testing main.o list.o

