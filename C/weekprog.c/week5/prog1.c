// Write a C program in which a person tracks expenses for 7 days.  
// Input: Store daily expenses in an array of size 7  
// Tasks: Calculate total expense, count how many days the expense was above 1000

#include <stdio.h>
int main()
{
    int n,i,expense[7],count=0;
    float total=0;
    printf("Enter expenses for 7 days: \n");
    for (i=1;i<=7;i++)
    {
        printf("Day %d : ",i);
        scanf("%d",&expense[i]);
        total=total+expense[i];
        if (expense[i]>1000)
        {
            count=count+1;
        }
        
    }
    printf("Total Expense = %.2f\n",total);
    printf("Number of days expense was above 1000 = %d",count);
    return 0;
}
