#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void init(queue_t *ptr_queue)
{
	ptr_queue->front_ = ptr_queue->rear_ = NULL;
}

void deinit(queue_t *ptr_queue)
{
	while(! is_empty(ptr_queue))
	{
		dequeue(ptr_queue);
	}
}

node_t* create_node(int key)
{
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	if(temp == NULL)
	{
		printf("memory full "); exit(1); // one way of handling
		// an exception
	}
	temp->key_ = key;
	return temp;
}

// 1.empty
// 2. queue with some nodes 

void enqueue(queue_t *ptr_queue, int key)
{
	node_t* temp = create_node(key);
	temp->next_ = NULL;
	if(is_empty(ptr_queue))
	{
		ptr_queue->front_ = temp;
	}
	else 
	{
		ptr_queue->rear_->next_ = temp;
	}
	ptr_queue->rear_ = temp;
}

// 1. empty 
// 2. single node 
// 3. # of nodes 
int dequeue(queue_t *ptr_queue)
{
	if(is_empty(ptr_queue))
	{
		printf("queue empty\n");
		exit(1);
	}
	// 1. copy the front 
	node_t* temp = ptr_queue->front_;
	// 2. copy value to be returned
	int key = temp->key_;
	// 3. change front
	ptr_queue->front_ = temp->next_;
	// 4. take care of one node case 
	if(ptr_queue->front_ == NULL)
	{
		ptr_queue->rear_ = NULL;
	}
	// 5 . free the node 
	free(temp);
	// 6. return the value 
	return key;

}

int is_full(queue_t *ptr_queue)
{
	// check allocating 
	node_t* temp = (node_t*)malloc(sizeof(node_t));
	free(temp);
	return temp == NULL;
}
int is_empty(queue_t *ptr_queue)
{
	return ptr_queue->front_ == NULL;
}