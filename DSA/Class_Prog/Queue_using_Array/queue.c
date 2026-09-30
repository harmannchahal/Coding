#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void init(queue_t *ptr_queue)
{
	// could be any valid index
	ptr_queue->front_ = ptr_queue->rear_ = 0;
}

void deinit(queue_t *ptr_queue)
{
	// no resource
	ptr_queue->front_ = ptr_queue->rear_ = 0;
}

void enqueue(queue_t *ptr_queue, int key)
{
	// increment and check 
	ptr_queue->rear_ = 	(ptr_queue->rear_ + 1) % MAXSIZE;
	if(is_full(ptr_queue))
	{
		printf("queue full\n");
		ptr_queue->rear_ = 	(ptr_queue->rear_ - 1 + MAXSIZE) % MAXSIZE;
	}
	else 
	{
		ptr_queue->key_[ptr_queue->rear_] = key;
	}

}

int dequeue(queue_t *ptr_queue)
{
	if(is_empty(ptr_queue))
	{
		printf("queue empty\n");
		return -1; // some value; may not be the best
	}
	else 
	{
		// increment the front 
		ptr_queue->front_ = (ptr_queue->front_ + 1) % MAXSIZE;
		return ptr_queue->key_[ptr_queue->front_];
	}

	

}

// used by enque 
// incr rear before checking
int is_full(queue_t *ptr_queue)
{
	return ptr_queue->front_ == ptr_queue->rear_;
}
// used by deque 
// check before incrementing front
int is_empty(queue_t *ptr_queue)
{
	return ptr_queue->front_ == ptr_queue->rear_;
}
