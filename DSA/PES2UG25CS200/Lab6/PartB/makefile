queue_deque: deque.o queue.o main.o
	gcc deque.o queue.o main.o -o queue_deque

deque.o: deque.c deque.h
	gcc -c deque.c

queue.o: queue.c queue.h deque.h
	gcc -c queue.c

main.o: main.c queue.h
	gcc -c main.c

clean:
	del *.o queue_deque.exe