client.exe : client_fact.o fact.o
	gcc client_fact.o fact.o -o client
fact.o : fact.c fact.h
	gcc -c fact.c
client_fact.o : client_fact.c fact.h
	gcc -c client_fact.c