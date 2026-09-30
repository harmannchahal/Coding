// Write a C function that accepts an array of integers representing the current stock of books. 
// The function should calculate and return the average stock of all books. Use a pointer to 
// traverse through the array. 
// Sample Input 
// Enter number of books: 5 
// Enter stock of 5 books: 
// 10 20 30 40 50 
// Sample output: 
// Average stock of books = 30.00

#include<stdio.h>
float calcavg(int *a,int n);
void main()
{
    int i,n;
    float avg;
    printf("Enter number of books: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter stock of %d books : \n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    avg = calcavg(a,n);
    printf("averegae = %.2f",avg);
}

float calcavg(int *a,int n)
{
    int i,*p=a,sum=0;    
    float avg;
    for(i=0;i<n;i++)
    {
        sum+=*(p+i);
    }
    avg=(float)sum/n;
    return avg;
}
