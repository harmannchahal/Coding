// Write a C program to sort a given list of elements using the Selection Sort method.

// The program should: 
// 1. accept n array elements as input, 
// 2. sort them in ascending order using selection sort, 
// 3. display the array before and after sorting. 

// Sample input and output: 
// Enter the number of elements: 
// 10 
// Enter the array elements: 
// 2 3 1 4 5 3 8 9 10 1 
// Array before sorting: 
// 2 3 1 4 5 3 8 9 10 1  
// Array after sorting in ascending order: 
// 1 1 2 3 3 4 5 8 9 10 



#include <stdio.h>

void selectionSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
}

int main() 
{
    int n, i;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Array before sorting:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, n);

    printf("Array after sorting in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

