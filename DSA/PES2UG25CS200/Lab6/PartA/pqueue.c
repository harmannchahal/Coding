#include <stdio.h>
#include <stdlib.h>
#include "pqueue.h"

void initQueue(PriorityQueue *pq)
{
    pq->front = NULL;
}

void enqueue(PriorityQueue *pq, int jobId, int depth, int traffic)
{
    Job *newJob;
    Job *temp;

    newJob = (Job *)malloc(sizeof(Job));

    newJob->jobId = jobId;
    newJob->depth = depth;
    newJob->traffic = traffic;
    newJob->priority = depth + traffic;
    newJob->next = NULL;

    if (pq->front == NULL || newJob->priority > pq->front->priority)
    {
        newJob->next = pq->front;
        pq->front = newJob;
    }
    else
    {
        temp = pq->front;

        while (temp->next != NULL &&
               temp->next->priority >= newJob->priority)
        {
            temp = temp->next;
        }

        newJob->next = temp->next;
        temp->next = newJob;
    }

    printf("Job %d added with priority %d.\n",
           jobId, newJob->priority);
}

void dequeue(PriorityQueue *pq)
{
    Job *temp;

    if (pq->front == NULL)
    {
        printf("Priority Queue is empty.\n");
        return;
    }

    temp = pq->front;

    printf("Processing Job %d (Depth=%d, Traffic=%d, Priority=%d)\n",
           temp->jobId,
           temp->depth,
           temp->traffic,
           temp->priority);

    pq->front = pq->front->next;

    free(temp);
}

void display(PriorityQueue *pq)
{
    Job *temp;

    if (pq->front == NULL)
    {
        printf("No pending jobs.\n");
        return;
    }

    temp = pq->front;

    printf("\nJobID\tDepth\tTraffic\tPriority\n");
    printf("---------------------------------------\n");

    while (temp != NULL)
    {
        printf("%d\t%d\t%d\t%d\n",
               temp->jobId,
               temp->depth,
               temp->traffic,
               temp->priority);

        temp = temp->next;
    }
}