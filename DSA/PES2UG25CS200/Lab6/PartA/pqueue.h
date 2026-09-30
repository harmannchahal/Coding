#ifndef PQUEUE_H
#define PQUEUE_H

typedef struct Job {
    int jobId;
    int depth;
    int traffic;
    int priority;
    struct Job *next;
} Job;

typedef struct {
    Job *front;
} PriorityQueue;

void initQueue(PriorityQueue *pq);
void enqueue(PriorityQueue *pq, int jobId, int depth, int traffic);
void dequeue(PriorityQueue *pq);
void display(PriorityQueue *pq);

#endif