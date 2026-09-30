client.exe : client.o dllc.o 
	gcc client.o dllc.o  -o client.exe 
client.o : client.c dllc.h  
	gcc -Wall -c client.c 
dllc.o : dllc.c dllc.h  
	gcc -Wall -c dllc.c 

	