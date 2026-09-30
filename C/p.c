// // #include<stdio.h>
// // int main()
// // {
// //     int a[5],i,sum=0;
// //     float avg;
// //     printf("Enter marksof 5 subs : ");
// //     for(i=0;i<5;i++)
// //     {
// //         scanf("%d",&a[i]);
// //         sum+=a[i];
// //     }
// //     avg=sum/5;
// //     printf("sun = %d",sum);
// //     printf("\nAvg= %.2f",avg);
// //     return 0;
// // }

// // #include<stdio.h>
// // int main()
// // {
// //     int n,bal=50000,amt,withd;
// //     printf("********** ATM MENU **********\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter your choice: : ");
// //     scanf("%d",&n);
// //     switch(n)
// //     {
// //         case 1:
// //         printf("Balance = %d\n",bal);
// //         break;

// //         case 2:
// //         printf("Enter amt to deposit : ");
// //         scanf("%d",&amt);
// //         if(amt<0)
// //             printf("Invalid deposit amt");
            
// //         else
// //         {
// //             printf("Deposit successful\n");
// //             printf("Updated bal = %d",bal+amt);
// //         } 
// //         break;
            

// //         case 3:
// //         printf("Enter amt ot withdraw : ");
// //         scanf("%d",&withd);
// //         if(withd>bal)
// //             printf("Insuficient balance");
// //         else if(withd<0)
// //             printf("Invalid Withdrawal Amount");
// //         else
// //         {
// //             printf("Withdrawal Successful.\n");
// //             printf("Remaining balance : %d",bal-withd);
// //         }
// //         break;

// //         case 4:
// //         printf("Thank u for using atm\n");
// //         break;

// //         default:
// //         printf("Invalid Choice. Please select between 1 and 4");
            
// //     }
// // }


// // #include<stdio.h>

// // float calcavg(int a[],int n,int sum)
// // {
// //     int i,*p=a;
// //     for(i=0;i<n;i++)
// //     {    
// //         sum=sum+*(p+i);
// //     }
// //     return (float) sum/3;
// // }

// // int main()
// // {
// //     int i,n,a[n],sum=0;
// //     float avg;
// //     printf("Enter number of books: ");
// //     scanf("%d",&n);
// //     printf("Enter stock of 5 books: ");
// //     for(i=0;i<n;i++)
// //     {
// //         scanf("%d",&a[i]);
// //     }
// //     avg= calcavg(a,n,sum);
// //     printf("avg = %.2f",avg);
    
// //     return 0;
// // }

// #include<stdio.h>
// int calcfee(int a[],int i)
// {
//     int sum=0;
//     for (i=0;i<10;i++)
//     {
//         sum+=a[i];
        
//     }
//     return sum;
// }

// int addnexp(int prize,int mainexp)
// {
//     int addn;
//     addn =  prize+mainexp;
//     return addn;
// }

// int salexp(int man, int sc, int ac)
// {
//     int sal;
//     sal = (man*45000)+(sc*30000)+(ac*15000);
//     return sal;
// }   

// int totalexp(int addn , int sal)
// {
//     int total;
//     total = addn+sal;
//     return total;
// }

// int main()
// {
//     int i,n=10,a[n],man,sc,ac,prize,mainexp,sum,addn,sal,total;
//     printf("Enter fee paid by 10 children: \n");
//     for(i=0;i<n;i++)
//     {
//         printf("Child %d Fee: ",i+1);
//         scanf("%d",&a[i]);
//     }

//     printf("Enter number of Managers: ");
//     scanf("%d",&man);
//     printf("Enter number of Senior Caretakers: ");
//     scanf("%d",&sc);
//     printf("Enter number of Assistant Caretakers: ");
//     scanf("%d",&ac);

//     printf("\nEnter maintenance expenses: ");
//     scanf("%d",&mainexp);
//     printf("Enter total cash prizes for top-performing children: ");
//     scanf("%d",&prize);

//     sum = calcfee(a,i);
//     addn = addnexp(prize,mainexp);
//     sal = salexp( man,sc,ac);
//     total = totalexp(addn , sal);

//     printf("----- Play Area Budget Summary -----\n");
//     printf("Total Fee Collection = %d\n",sum);
//     printf("Total Salary Expenditure = %d\n",sal);
//     printf("Total Additional Expenses = %d\n",addn);
//     printf("Final Remaining Balance = %d",sum-sal-addn);

//     return 0;


// }

// #include<stdio.h>
// #include <string.h>
// int main()
// {
// char str1[10] = "C class" ; 
// printf("%s\n", str1); // C class 
// char str2[ ] = "C class" ; 
// printf("%s\n", str2);// C class 
// str2[1] = 'C' ; 
// printf("%s\n", str2); // CCclass
// }

//Program: 
// Use gcc –E option with this code initially to check which part of the code is provided for compilation 
// #include<stdio.h> 
// int main() 
// { 
// #ifdef  MINGW32  // No ( and ) // if mingw in windows system is used, the 
// value of this macro is 1 
// printf("windows system"); 
// char c,d; 
// printf("enter the character"); 
// scanf("%c",&c); 
// fflush(stdin); 
// printf("enter one more character"); 
// scanf("%c",&d); 
// printf("entered characters are %c %c",c,d); 
// #elif   unix __ // if unix/Linux system is used, the value of this macro is 1 
// char c; 
// printf("unix system"); 
// 1 Department of Computer Science & Engineering (Problem Solving With C) PESU 
// } 
// Unit 4: Portable Program Development 
// #include<stdio_ext.h> 
// printf("enter the character"); 
// scanf("%c",&c); 
// fpurge(stdin); 
// printf("enter one more character"); 
// scanf("%c",&d); 
// printf("entered characters are %c %c",c,d); 
// #elif  APPLE 
// #else 
// // if MAC system is used, the value of this macro is 1 
// printf("mac system"); 
// printf("other system"); 
// #endif 
// return 0;

#include<stdio.h> 
// void swap(int *a, int *b) 
// { 
// int temp = *a; 
// *a = *b; 
// *b = temp; 
// } 
// int main() 
// { 
// int a = 100;  
// int b = 200; 
// printf("before call a is %d and b is %d\n", a, b); 
// swap(&a, &b);  
// printf("after call a is %d and b is %d\n", a, b); 
// return 0;  
// }
// int main()
// {
// char str7[100] ; 
// printf("enter your name\n"); 
// scanf("%[^abcd]s",str7); // neither a nor b nor c nor d 
// //When it encounters any of these characters, scanf terminates 
// printf("u entered %s\n",str7);
// }

#include<stdio.h>
int main()
{
char list_of_friends[] = {"THAKSH", "INCHARA", "AADIT", "AADHYA"};
printf("%s",list_of_friends[0]);
return 0;
}