// Write a C program to: Read N integers into an array Count and display how many numbers are even and how many are odd.

#include <stdio.h>
int main()
{
    int n,i,a[n],odd=0,even=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter %d Integers :\n",n);
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("Number of Even elements = %d\n",even);
    printf("Number of Odd elements = %d",odd);

    return 0;
}
