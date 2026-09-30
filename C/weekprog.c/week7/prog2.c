// Write a C program using recursion to search a given element in a sorted array using binary search. Since binary search works only 
// on a sorted array, ensure that the array is in ascending order before performing the search. 

// Sample input and output: 
// Enter the number of elements: 
// 6 
// Enter the array elements in ascending order: 
// 10 20 30 40 50 60 
// Enter the element to search: 
// 50 
// The element 50 is found at position 5 


#include <stdio.h>
// Recursive Binary Search Function
int binarySearch(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int n, i, key, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 🔴 Basic check (don't blindly trust user input)
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            printf("Array is not sorted in ascending order.\n");
            return 0;
        }
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    pos = binarySearch(arr, 0, n - 1, key);

    if (pos != -1)
        printf("The element %d is found at position %d\n", key, pos + 1);
    else
        printf("Element not found\n");

    return 0;
}