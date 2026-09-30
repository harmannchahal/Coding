// Write a C program using recursion to calculate the total recharge amount for n months.
 
// Sample input and output: 
// Enter the monthly recharge amount: 
// 199 
// Enter the number of months: 
// 6 
// Total recharge amount for 6 months = 1194

#include <stdio.h>

int calculateTotal(int amount, int months) {
    if (months == 0) {
        return 0;
    }
    return amount + calculateTotal(amount, months - 1);
}

int main() {
    int amount, months;

    printf("Enter the monthly recharge amount:\n");
    scanf("%d", &amount);
    printf("Enter the number of months:\n");
    scanf("%d", &months);

    int total = calculateTotal(amount, months);
    
    printf("Total recharge amount for %d months = %d\n", months, total);

    return 0;
}

