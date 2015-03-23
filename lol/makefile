testing : testing.o list.o
	gcc -o testing testing.o list.o

testing.o : testing.c header.h
	gcc -c testing.c

list.o : list.c
	gcc -c list.c

clean :
	rm -f testing testing.o list.o

