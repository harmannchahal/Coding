//  Store electricity units consumed for 6 houses in an array. Use functions 
// to: display all units, find average units consumed, count houses 
// consuming more than 200 units

# include <stdio.h>
void marks()
{
    int arr[6],highest=0,n=0;
    float sum=0,avg;
    printf("Enter marks of 6 students : ");
    for (int i=1;i<=6;i++)
    {
        scanf("%d",&arr[i]);
        
        sum+=arr[i];
        if(arr[i]>200)
        {
            n+=1;
        }
    }
    avg=sum/6;
    
}

void main()
{
    marks();
}
