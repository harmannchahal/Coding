CC = gcc
CFLAGS = -Wall -Wextra

clist: client.o clist.o
	$(CC) $(CFLAGS) -o clist client.o clist.o

client.o: client.c clist.h
	$(CC) $(CFLAGS) -c client.c

clist.o: clist.c clist.h
	$(CC) $(CFLAGS) -c clist.c

clean:
	rm -f *.o clist