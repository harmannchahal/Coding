// Write a C program to create and display a singly linked list. 

// The program should perform the following tasks: 
// 1. Ask the user to enter the number of nodes to be created.  
// 2. Dynamically create the required number of nodes using malloc().  
// 3. Read the data value for each node from the user.  
// 4. Link each node to the next node to form a singly linked list.  
// 5. Use a while loop for creating the nodes.  
// 6. Use a while loop to display the elements of the linked list.  
// 7. Display the linked list elements in the order in which they are entered. 

// Sample Input: 
// Enter the number of nodes: 4 
// Enter data for node 1: 10 
// Enter data for node 2: 20 
// Enter data for node 3: 30 
// Enter data for node 4: 40 
// Sample Output: 
// The elements in the singly linked list are: 
// 10 -> 20 -> 30 -> 40 -> NULL 

#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};

void main()
{
    int x,n, i=0;
    struct Node*newnode,*head,*temp;
    head=0;
    printf("Enter the number of nodes : ");
    scanf("%d",&n);

    while(i<n)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));
        printf("Enter the data of node %d : ",i+1);
        scanf("%d",&x);
        i++;

        newnode -> data=x;
        newnode -> next=0;

        if(head==0)
        {
            head = newnode;
            temp=head;
        }

        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
    }

    temp=head;

    printf("The elements in the singly linked list are: \n");
    while(temp!=0)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    if(temp==0)
    {
        printf("NULL");
    }
    free(newnode);
}

