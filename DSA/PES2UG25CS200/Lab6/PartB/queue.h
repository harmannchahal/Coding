#ifndef QUEUE_H
#define QUEUE_H

#include "deque.h"

typedef struct {
    Deque dq;
} Queue;

void queueInit(Queue *q);
int queueIsEmpty(Queue *q);
void queueEnqueue(Queue *q, int value);
int queueDequeue(Queue *q);
void queueDisplay(Queue *q);

#endif