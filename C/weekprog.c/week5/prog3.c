// Write a C program to analyze the electricity consumption of houses in an apartment. There are 6 houses in the apartment. 
// The user must enter the electricity units consumed by each house and store them in a one-dimensional array. 

// The program should calculate and display the following: 
// 1. Total electricity units consumed by all houses. 
// 2. Average electricity consumption. 
// 3. Number of houses consuming more than 300 units.

#include <stdio.h>
int main()
{
    int i,units[6],count=0;
    float total=0,avg;
    printf("Enter electricity units consumed by 6 houses :\n");
    for(i=1;i<=6;i++)
    {
        printf("House %d : ",i);
        scanf("%d",&units[i]);
        total+=units[i];

        if(units[i]>300)
        {
            count+=1;
        }
    }
    avg=total/6;
    printf("Total Units Consumed = %.0f\n",total);
    printf("Average Consumption = %.2f\n",avg);
    printf("Number of houses consuming more than 300 units = %d",count);
    return 0;    
}