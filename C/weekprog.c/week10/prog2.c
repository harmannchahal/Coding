// A hospital wants to maintain patient data in a structured way. Each patient has a patient ID, name, age, disease name, number of days admitted,
// and treatment charge per day. 

// 1. Read the patient details from the user  
// 2. Display the entered patient details  
// 3. Calculate the total treatment cost  
// 4. Check the patient’s age:  
//      If the patient is 60 years or above, give a 10% discount on the treatment cost  
//      Otherwise, no discount is given  
// 5. Check the number of days admitted:  
//      If the patient stayed for more than 7 days, add an extra medical service charge of Rs. 2000  
//      Otherwise, no extra charge is added 
// 6. Display the discount amount, extra charge, and final hospital bill 

// Sample input and output: 
// Enter patient ID: 101 
// Enter patient name: Ramesh Kumar 
// Enter age: 65 
// Enter disease name: Viral Fever 
// Enter number of days admitted: 10 
// Enter treatment charge per day: 3000 

//--- Patient Details --- 
// Patient ID              : 101 
// Patient Name            : Ramesh Kumar 
// Age                     : 65 
// Disease Name            : Viral Fever 
// Days Admitted           : 10 
// Treatment Charge/Day    : 3000.00 

//--- Bill Details --- 
// Total Treatment Cost    : 30000.00 
// Discount Amount         : 3000.00 
// Extra Medical Charge    : 2000.00 
// Final Hospital Bill     : 29000.00 

#include<stdio.h>
#include<string.h>

struct patient
{
    int id;
    char name[20];
    int age;
    char disease[20];
    int days;
    float charges;
};

int main()
{
    float total_cost,disc,extra,bill;
    struct patient p;

        printf("Enter Patient ID : ");
        scanf("%d",&p.id);
        printf("Enter Patient Name: ");
        scanf(" %[^\n]",&p.name);
        printf("Enter Age: ");
        scanf("%d",&p.age);
        printf("Enter Disease name: ");
        scanf(" %[^\n]",&p.disease);
        printf("Enter number of days admitted: ");
        scanf("%d",&p.days);
        printf("Enter treatment charge per day: ");
        scanf("%f",&p.charges);

        printf("\n--- Patient Details ---\n");
        printf("Patient ID : %d\n",p.id);
        printf("Patient Name : %s\n",p.name);
        printf("Age : %d\n",p.age);
        printf("Disease Name : %s\n",p.disease);
        printf("Days Admitted : %d\n",p.days);
        printf("Treatment Charge/Day : %.2f\n",p.charges);


        total_cost=p.days*p.charges;
        if(p.age>=60)
           disc=0.1*total_cost;
        else
            disc=0;

        if(p.days>7)
            extra=2000;
        else
            extra = 0;


        bill=total_cost+extra-disc;

        printf("\n--- Bill Details ---\n");
        printf("Total Treatment Cost : %.2f\n",total_cost);
        printf("Discount amount : %.2f\n",disc);
        printf("Extra Medical Charge : %.2f\n",extra);
        printf("Final Hospital Bill : %.2f\n",bill);

        return 0;
    
}
