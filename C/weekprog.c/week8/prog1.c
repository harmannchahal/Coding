// Write a C program to: declare a character array as a string, initialize it with a value, display the string, count the
// number of characters in the string, and find and display the character that appears the most number of times in the string. 
 
// The string is: programming 
// Number of characters in the string: 11 
// The character that appears the most number of times is: r 
// It appears 2 times

#include<stdio.h>
#include<string.h>
void main()
{
    int i,count=0,n;
    char a[20]="Programming";
    printf("The String is : %s",a);
    n=strlen(a);
    printf("Number of characters in the string is : %d",n);
    for (i=0;a[i]!='\0';i++)
    {
        for(int j=i+1; a[j]!='\0'; j++)
        {
            if(a[i]==a[j])
            {
                count+=1;
            }
        }
    }

}