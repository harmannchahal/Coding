#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

// display function
void display(struct node* head)
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int n, i, x, begx, endx;
    struct node *head = NULL, *temp, *newnode, *prev;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    //Create list
    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data for node %d: ", i+1);
        scanf("%d", &x);

        newnode->data = x;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }

    printf("\nInitial linked list:\n");
    display(head);

    //Insert at beginning
    printf("\nEnter value to insert at beginning: ");
    scanf("%d", &begx);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = begx;
    newnode->next = head;
    head = newnode;

    printf("\nAfter inserting %d at the beginning:\n", begx);
    display(head);

    //Insert at end
    printf("\nEnter value to insert at end: ");
    scanf("%d", &endx);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = endx;
    newnode->next = NULL;

    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    printf("\nAfter inserting %d at the end:\n", endx);
    display(head);

    //Delete from beginning
    if(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    printf("\nAfter deleting a node from the beginning:\n");
    display(head);

    //Delete from end
    if(head == NULL)
    {
        
    }
    else if(head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }

    printf("\nAfter deleting a node from the end:\n");
    display(head);

    return 0;
}