// Write a C program using multiple user-defined functions to manage college fest finances. 
// Income Sources: Registration fees from participants (15 participants), Sponsorship amount, Stall rent collection 

// Expenses: 
//      Stage setup, Guest payment, Marketing expense, Volunteer refreshment expense (₹200 per volunteer) 

// User inputs: Registration fee per participant, Sponsorship amount, Stall rent amount, Number of volunteers, All expense amounts 

// Functions Required: 
// 1. calculateIncome() 
// 2. calculateVolunteerExpense() 
// 3. calculateTotalExpense() 
// 4. calculateProfitOrLoss()

// Display: Total Income, Total Expense, Profit or Loss

// Sample Input: 
// Registration Fee: 500 
// Sponsorship: 20000 
// Stall Rent: 10000 
// Stage Setup: 15000 
// Guest Payment: 8000 
// Marketing: 5000 
// Volunteers: 20 

#include <stdio.h>

float calculateIncome(int reg_fee,int sponsor, int stall_rent);
int calculateVolunteerExpense(int volunteers);
float calculateTotalExpense(int vol_exp,int stage_setup,int guest_payment, int marketing);
float calculateProfitOrLoss(float total_exp,float total_inc);

void main()
{
    int reg_fee,sponsor,stall_rent,stage_setup,guest_payment,marketing,volunteers,vol_exp;
    float total_exp, total_inc, profit, loss,prof_or_loss;
    printf("Registration Fee : ");
    scanf("%d",&reg_fee);
    printf("Sponsorship : ");
    scanf("%d",&sponsor);
    printf("Stall Rent : ");
    scanf("%d",&stall_rent);
    printf("Stage Setup : ");
    scanf("%d",&stage_setup);
    printf("Guest Payment : ");
    scanf("%d",&guest_payment);
    printf("Marketing : ");
    scanf("%d",&marketing);
    printf("Volunteers : ");
    scanf("%d",&volunteers);

    total_inc = calculateIncome(reg_fee, sponsor,stall_rent);
    vol_exp = calculateVolunteerExpense(volunteers);
    total_exp=calculateTotalExpense( vol_exp, stage_setup, guest_payment, marketing);
    
    printf("\nTotal Income: %.2f\n",total_inc);
    printf("Total Expense: : %.2f\n",total_exp);

    calculateProfitOrLoss(total_exp,total_inc);
  
}

float calculateIncome(int reg_fee,int sponsor, int stall_rent)
{
    return (reg_fee*15)+sponsor+stall_rent;
}

int calculateVolunteerExpense(int volunteers)
{   
    return volunteers*200;
    
}

float calculateTotalExpense(int vol_exp,int stage_setup,int guest_payment, int marketing)
{
    return  vol_exp+stage_setup+guest_payment+marketing;
}

float calculateProfitOrLoss(float total_exp,float total_inc)
{
    if(total_inc > total_exp)
        printf("Profit: Rs %.2f\n", total_inc - total_exp);
    else
        printf("Loss: Rs %.2f\n", total_exp - total_inc);
}
