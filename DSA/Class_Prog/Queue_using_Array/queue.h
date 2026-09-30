/*
queue :
abstract data structure
supports two operations :
- add to the queue : enqueue
- remove from the queue : dequeue 

has two ends :
- rear : add at the rear 
- front : remove from the front 

implementations :
- list based 
- array based 

*/
#ifndef QUEUE_H
#define QUEUE_H
#define MAXSIZE 5
struct queue
{
	int key_[MAXSIZE];
	int rear_; // indices - therefore int
	int front_;
};
typedef struct queue queue_t;
void init(queue_t *ptr_queue);
void deinit(queue_t *ptr_queue);

void enqueue(queue_t *ptr_queue, int key);
int dequeue(queue_t *ptr_queue);

int is_full(queue_t *ptr_queue);
int is_empty(queue_t *ptr_queue);


 
#endif 

