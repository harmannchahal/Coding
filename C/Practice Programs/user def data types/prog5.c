// ----------- QUESTION -----------                    | ----------- SAMPLE OUTPUT -----------
// Renewable Energy Plant Performance Analysis         |
//                                                     | Enter number of inverters: 3
// Each inverter has:                                  |
// - Inverter ID                                       | Enter details for Inverter 1
// - Location name                                     | Enter Inverter ID: 101
// - Energy generated (kWh)                            | Enter Location Name: Chennai Plant A
// - Maximum capacity (kWh)                            | Enter Energy Generated (kWh): 300
// - Fault count                                       | Enter Maximum Capacity (kWh): 500
//                                                     | Enter Fault Count: 2
// Tasks:                                              |
// 1. Define structure Inverter                        | Enter details for Inverter 2
// 2. Read n inverters                                 | Enter Inverter ID: 102
// 3. Pass array using pointer                         | Enter Location Name: Chennai Plant B
// 4. Compute efficiency:                              | Enter Energy Generated (kWh): 200
//    efficiency = (energy / capacity) × 100           | Enter Maximum Capacity (kWh): 500
// 5. Find efficiency < 60%                            | Enter Fault Count: 1
// 6. Find best inverter with fault < 3                |
// 7. Display all details + results                    | Enter details for Inverter 3
//                                                     | Enter Inverter ID: 103
//                                                     | Enter Location Name: Chennai Plant C
//                                                     | Enter Energy Generated (kWh): 450
//                                                     | Enter Maximum Capacity (kWh): 500
//                                                     | Enter Fault Count: 4
//                                                     |
//                                                     | ----- Inverter Performance Report -----
//                                                     |
//                                                     | Inverter ID: 101
//                                                     | Location: Chennai Plant A
//                                                     | Efficiency: 60.00%
//                                                     |
//                                                     | Inverter ID: 102
//                                                     | Location: Chennai Plant B
//                                                     | Efficiency: 40.00%
//                                                     |
//                                                     | Inverter ID: 103
//                                                     | Location: Chennai Plant C
//                                                     | Efficiency: 90.00%
//                                                     |
//                                                     | ----- Low Performing Inverters (<60%) -----
//                                                     | Inverter ID: 102 | Chennai Plant B | 40.00%
//                                                     |
//                                                     | ----- Best Stable Inverter (fault <3) -----
//                                                     | Inverter ID: 101
//                                                     | Location: Chennai Plant A
//                                                     | Efficiency: 60.00%
//                                                     | Fault Count: 2

#include<stdio.h>
#include<string.h>

struct inverter
{
    int id,fault;
    char name[20];
    float energy,cap;
};

int main()
{
    int i,n,c=0;
    
    printf("Enter no of inverteers :  ");
    scanf("%d",&n);

    float eff[n];
    struct inverter inv[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the details of inverter %d :\n",i+1);
        printf("Enter the inverter id : ");
        scanf("%d",&inv[i].id);
        printf("Enter Location Name: ");
        scanf(" %[^\n]",inv[i].name);
        printf("Enter Energy Generated (kWh): ");
        scanf("%f",&inv[i].energy);
        printf("Enter Maximum Capacity (kWh): ");
        scanf("%f",&inv[i].cap);
        printf("Enter Fault Count: ");
        scanf("%d",&inv[i].fault);

        eff[i] = (inv[i].energy / inv[i].cap) * 100;

    }

    printf("\n ----- Inverter Performance Report -----\n\n");

    for(i=0;i<n;i++)
    { 
        printf("Inverter ID: %d \n",inv[i].id);
        printf("Location: %s\n",inv[i].name);
        printf("Efficiency: %.2f%%\n",eff[i]);
    }
    
    printf("\n----- Low Performing Inverters (<60%%) -----\n");

    for(i=0;i<n;i++)
    {
        if(eff[i]<60)
            printf("%d | %s | %.2f%%\n", inv[i].id, inv[i].name, eff[i]);  
    }

    printf("\n\n----- Best Stable Inverter (fault <3) -----\n");

    for(i=0;i<n;i++)
    {
        if(inv[i].fault<3)
        printf("Inverter ID: %d\n", inv[i].id);
        printf("Location: %s\n", inv[i].name);
        printf("Efficiency: %.2f%%\n", eff[i]);
        printf("Fault Count: %d\n", inv[i].fault);
    }
    return 0;
    
}