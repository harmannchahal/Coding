// A supermarket records the number of items sold in each billing counter during a day. The  sales manager wants to analyze the 
// performance of all counters by finding the highest number of items sold, the lowest number of items sold, and the total items sold. 

// Write a C program to perform this analysis by passing the array of sales data from main() to user-defined functions. 
// 1. Read the number of billing counters. 
// 2. Read the number of items sold at each counter and store them in an array. 
// 3. Pass the array as an actual parameter to functions. 
// 4. In the functions, receive the array using pointer as the formal parameter. 
// 5. Write separate functions to: 
//       find the total items sold 
//       find the highest items sold 
//       find the lowest items sold 
// 6. Display all the results clearly. 

// Sample input and output: 
// Enter the number of billing counters: 
// 5 
// Enter the number of items sold at each counter: 
// 120 95 150 80 110 
// Sales Analysis Report 
// Total items sold: 555 
// Highest items sold: 150 
// Lowest items sold: 80

#include <stdio.h>

int findTotal(int *arr, int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += *(arr + i);
    }
    return sum;
}

int findHighest(int *arr, int n) 
{
    int max = *arr;
    for (int i = 1; i < n; i++) 
    {
        if (*(arr + i) > max) 
        {
            max = *(arr + i);
        }
    }
    return max;
}

int findLowest(int *arr, int n) {
    int min = *arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }
    return min;
}

int main() {
    int n;

    printf("Enter the number of billing counters:\n");
    scanf("%d", &n);

    int sales[n];
    printf("Enter the number of items sold at each counter:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sales[i]);
    }

    printf("\nSales Analysis Report\n");
    printf("Total items sold: %d\n", findTotal(sales, n));
    printf("Highest items sold: %d\n", findHighest(sales, n));
    printf("Lowest items sold: %d\n", findLowest(sales, n));

    return 0;
}