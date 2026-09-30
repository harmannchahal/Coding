#include "queue.h"

void queueInit(Queue *q)
{
    dequeInit(&q->dq);
}

int queueIsEmpty(Queue *q)
{
    return dequeIsEmpty(&q->dq);
}

void queueEnqueue(Queue *q, int value)
{
    insertRear(&q->dq, value);
}

int queueDequeue(Queue *q)
{
    return deleteFront(&q->dq);
}

void queueDisplay(Queue *q)
{
    dequeDisplay(&q->dq);
}