client.exe: client.o poly.o term.o
	gcc -Wall -Wextra client.o poly.o term.o -o client.exe -lm

client.o: client.c poly.h term.h
	gcc -Wall -Wextra -c client.c

poly.o: poly.c poly.h term.h
	gcc -Wall -Wextra -c poly.c

term.o: term.c term.h
	gcc -Wall -Wextra -c term.c

clean:
	rm -f *.o client.exe