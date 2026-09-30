#include <stdio.h>
#include "queue.h"

int main()
{
    Queue q;
    int choice;
    int value;

    queueInit(&q);

    printf("----- Queue (implemented using Deque) -----\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    while (1)
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);

                queueEnqueue(&q, value);
                break;

            case 2:
                if (queueIsEmpty(&q))
                {
                    printf("Queue is empty.\n");
                }
                else
                {
                    value = queueDequeue(&q);
                    printf("Dequeued value: %d\n", value);
                }
                break;

            case 3:
                queueDisplay(&q);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice.\n");
        }

        printf("\n");
    }

    return 0;
}