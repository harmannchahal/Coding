pothole_pq: pqueue.o main.o
	gcc pqueue.o main.o -o pothole_pq

pqueue.o: pqueue.c pqueue.h
	gcc -c pqueue.c

main.o: main.c pqueue.h
	gcc -c main.c

clean:
	del *.o pothole_pq.exe