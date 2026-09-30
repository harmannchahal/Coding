#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

void dequeInit(Deque *dq)
{
    dq->front = NULL;
    dq->rear = NULL;
}

int dequeIsEmpty(Deque *dq)
{
    return dq->front == NULL;
}

void insertRear(Deque *dq, int value)
{
    DNode *newNode;

    newNode = (DNode *)malloc(sizeof(DNode));

    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (dq->rear == NULL)
    {
        dq->front = newNode;
        dq->rear = newNode;
    }
    else
    {
        newNode->prev = dq->rear;
        dq->rear->next = newNode;
        dq->rear = newNode;
    }
}

int deleteFront(Deque *dq)
{
    DNode *temp;
    int value;

    if (dequeIsEmpty(dq))
    {
        return -1;
    }

    temp = dq->front;
    value = temp->data;

    dq->front = dq->front->next;

    if (dq->front == NULL)
    {
        dq->rear = NULL;
    }
    else
    {
        dq->front->prev = NULL;
    }

    free(temp);

    return value;
}

void dequeDisplay(Deque *dq)
{
    DNode *temp;

    if (dequeIsEmpty(dq))
    {
        printf("Deque is empty.\n");
        return;
    }

    temp = dq->front;

    printf("Front -> ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("<- Rear\n");
}