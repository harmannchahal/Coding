// Write a C program to search for a given element in an array using linear search. 

// The program must consider the following scenarios: 
// 1. Element found 
//       Write a C program without using functions. If the element is found, the search should stop immediately and display the position  
// 2. Element repeated multiple times 
//      Write a C program using functions. If the element occurs more than once in the array, the program should identify that the 
//      element has multiple occurrences. 
//      You may display all positions or the count of occurrences. 
// 3. Write a C program to implement linear search using pointers. Use pointer notation instead of array indexing to traverse the array. 

// Sample input and output: 
// Enter the number of elements: 
// 5 
// Enter the array elements: 
// 10 20 30 40 50 
// Enter the element to search: 
// 30 
// The element 30 is found at position 3 
// Enter the element to search: 
// 60


// 1. Linear Search without using functions
// If element is found, stop immediately and display position
#include<stdio.h>

int main()
{
    int n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            printf("The element %d is found at position %d", key, i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("The element %d is not found", key);
    }

    return 0;
}



// 2. Linear Search using functions
// Find multiple occurrences of the element

#include<stdio.h>

void linearSearch(int a[], int n, int key)
{
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Element found at position %d\n", i + 1);
            count++;
        }
    }

    if(count == 0)
    {
        printf("The element %d is not found", key);
    }
    else if(count > 1)
    {
        printf("The element occurs %d times", count);
    }
}

int main()
{
    int n, i, key;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    linearSearch(a, n, key);

    return 0;
}


// 3. Linear Search using pointers
// Traverse array using pointer notation
#include<stdio.h>
int main()
{
    int n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    int *ptr = a;

    printf("Enter the array elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) == key)
        {
            found = 1;
            printf("The element %d is found at position %d", key, i + 1);
            break;
        }
    }

    if(found == 0)
    {
        printf("The element %d is not found", key);
    }

    return 0;
}