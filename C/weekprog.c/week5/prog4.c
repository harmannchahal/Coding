#include<stdio.h>
int main()
{
    int seat[5][4],i,j,booked=0,avail=0;
    printf("Enter seat availability (1 = Booked, 0 = Available):\n");
    for (i=0;i<5;i++)
    {
        printf("Row %d\n\n",i+1);
        for(j=0;j<4;j++)
        {
            printf("Seat %d : ",j+1);
            scanf("%d",&seat[i][j]);

            if (seat[i][j]==0)
            {
                avail+=1;
            }
            else 
            {
                booked+=1;
            }
        }
    }

    printf("Seat Availability Matrix: \n");
    for (i=1;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",seat[i][j]);
        }
        printf("\n");
    }

    printf("Total Booked Seats = %d\n",booked);
    printf("Total Available Seats = %d",avail);
    return 0;
}