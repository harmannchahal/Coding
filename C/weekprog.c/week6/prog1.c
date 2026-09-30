// Write a C program using multiple user-defined functions to calculate employee salary. User inputs: Basic salary 
// Salary Rules: HRA = 20% of basic, DA = 10% of basic, Tax = 5% of gross salary 

// Functions: 
// 1. calculateHRA(float basic) 
// 2. calculateDA(float basic) 
// 3. calculateGross(float basic, float hra, float da) 
// 4. calculateTax(float gross) 
// 5. calculateNet(float gross, float tax) 

// Display: Gross Salary, Tax, Net Salary

#include <stdio.h>
float calculateHRA(float basic); 
float calculateDA(float basic); 
float calculateGross(float basic, float hra, float da); 
float calculateTax(float gross); 
float calculateNet(float gross, float tax);

void main()
{
    int basic;
    float hra,da,gross,tax,net;

    printf("Enter the Value of basic Salary : ");
    scanf("%d",&basic);

    hra=calculateHRA(basic); 
    da=calculateDA(basic); 
    gross=calculateGross(basic,hra,da); 
    tax=calculateTax(gross); 
    net=calculateNet(gross,tax);

    printf("--------- SALARY DETAILS ---------\n");

    printf("Gross Salary = %.2f\n",gross);
    printf("Tax = %.2f\n",tax);
    printf("Net salary = %.2f",net);


}

float calculateHRA(float basic)
{
    return 0.2*basic;    
}

float calculateDA(float basic)
{
    return 0.1*basic;
}

float calculateGross(float basic, float hra, float da)
{
    return hra+da+basic;
}

float calculateTax(float gross)
{
    return gross*0.05;

}

float calculateNet(float gross, float tax)
{
    return gross-tax;
    
}

