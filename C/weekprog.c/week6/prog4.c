// ======================================================================================================
// QUESTION                                                        SAMPLE INPUT / OUTPUT
// ======================================================================================================

// Play area staff salaries:                                      Enter fee paid by 10 children:

// • Manager               → Rs. 45,000                           Child 1 Fee   : 20000
// • Senior Caretaker      → Rs. 30,000                           Child 2 Fee   : 22000
// • Assistant Caretaker   → Rs. 15,000                           Child 3 Fee   : 21000
//                                                                Child 4 Fee   : 20000
// Input required:                                                Child 5 Fee   : 23000
//                                                                Child 6 Fee   : 21000
// • Number of Managers                                           Child 7 Fee   : 22000
// • Number of Senior Caretakers                                  Child 8 Fee   : 20000
// • Number of Assistant Caretakers                               Child 9 Fee   : 21000
//                                                                Child 10 Fee  : 22000
// • Maintenance expenses
// • Prize amount                                                 Managers               : 1
//                                                                Senior Caretakers     : 2
// Program Requirements:                                          Assistant Caretakers  : 3

// 1. Function to calculate total fee collection                  Maintenance Expense    : 30000

// 2. Function to calculate total salary                          Prize Amount           : 15000

// 3. Function to calculate additional expenses                   
//    (maintenance + prizes)                                      --------------------------------
//                                                                Play Area Budget Summary
// 4. Calculate total expenditure                                 --------------------------------
//    (salary + additional expenses)

// 5. Display:                                                    Total Fee Collection
//                                                                = 211000.00
//    • Total fee collection
//    • Total salary expenditure                                  Total Salary Expenditure
//    • Total additional expenses                                 = 150000.00
//    • Final remaining balance
//                                                                Total Additional Expenses
// Use functions and return values.                               = 45000.00
// Do not use global variables.
//                                                                Final Remaining Balance
//                                                                = 16000.00

// ======================================================================================================

#include<stdio.h>
int calcfee(int a[],int i)
{
    int sum=0;
    for (i=0;i<10;i++)
    {
        sum+=a[i];
        
    }
    return sum;
}

int addnexp(int prize,int mainexp)
{
    int addn;
    addn =  prize+mainexp;
    return addn;
}

int salexp(int man, int sc, int ac)
{
    int sal;
    sal = (man*45000)+(sc*30000)+(ac*15000);
    return sal;
}   

int totalexp(int addn , int sal)
{
    int total;
    total = addn+sal;
    return total;
}

int main()
{
    int i,n=10,a[n],man,sc,ac,prize,mainexp,sum,addn,sal,total;
    printf("Enter fee paid by 10 children: \n");
    for(i=0;i<n;i++)
    {
        printf("Child %d Fee: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter number of Managers: ");
    scanf("%d",&man);
    printf("Enter number of Senior Caretakers: ");
    scanf("%d",&sc);
    printf("Enter number of Assistant Caretakers: ");
    scanf("%d",&ac);

    printf("\nEnter maintenance expenses: ");
    scanf("%d",&mainexp);
    printf("Enter total cash prizes for top-performing children: ");
    scanf("%d",&prize);

    sum = calcfee(a,i);
    addn = addnexp(prize,mainexp);
    sal = salexp( man,sc,ac);
    total = totalexp(addn , sal);

    printf("----- Play Area Budget Summary -----\n");
    printf("Total Fee Collection = %d\n",sum);
    printf("Total Salary Expenditure = %d\n",sal);
    printf("Total Additional Expenses = %d\n",addn);
    printf("Final Remaining Balance = %d",sum-sal-addn);

    return 0;


}