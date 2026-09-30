a.exe: main.o clist.o
	gcc main.o clist.o -o a.exe

main.o: main.c clist.h
	gcc -Wall -c main.c

clist.o: clist.c clist.h
	gcc -Wall -c clist.c