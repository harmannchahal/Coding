#include <stdio.h>

int main() 
{
    int vehicleType,vehicleCount = 0;
    float hours,rate = 0, bill = 0, totalRevenue = 0, maxBill = 0, minBill = 0;

    printf("Smart Parking Lot Billing System\n");
    printf("Enter Vehicle Type (1=Bike, 2=Car, 3=SUV, 4=Truck, 0=Stop)\n");

    printf("Enter vehicle type: ");
    scanf("%d", &vehicleType);

    while (vehicleType != 0) {
        printf("Enter number of hours parked: ");
        scanf("%f", &hours);

        if (vehicleType == 1)
            rate = 20;
        else if (vehicleType == 2)
            rate = 40;
        else if (vehicleType == 3)
            rate = 60;
        else if (vehicleType == 4)
            rate = 80;
        else 
        {
            printf("Invalid vehicle type!\n");
            printf("Enter vehicle type: ");
            scanf("%d", &vehicleType);
            continue;
        }

        bill = rate * hours;

        if (hours > 6) 
        {
            bill = bill * 0.85;
        }

        vehicleCount++;

        if (vehicleCount % 10 == 0) {
            bill += 50;
        }

        printf("Bill for vehicle %d = Rs. %.2f\n", vehicleCount, bill);

        totalRevenue += bill;

        if (vehicleCount == 1) 
        {
            maxBill = minBill = bill;
        } 
        else 
        {
            if (bill > maxBill)
                maxBill = bill;
            if (bill < minBill)
                minBill = bill;
        }

        printf("Enter vehicle type (0 to stop): ");
        scanf("%d", &vehicleType);
    }

    printf("----- Final Summary -----\n");
    printf("Total Vehicles: %d\n", vehicleCount);
    printf("Total Revenue: Rs. %.2f\n", totalRevenue);

    if (vehicleCount > 0) {
        printf("Maximum Bill: Rs. %.2f\n", maxBill);
        printf("Minimum Bill: Rs. %.2f\n", minBill);
    } else {
        printf("Maximum Bill: Rs. 0.00\n");
        printf("Minimum Bill: Rs. 0.00\n");
    }

    return 0;
}