#include<stdio.h>
#include "fact.h"

 int main()
 {
    int n;
    printf("Enter a small positive number : ");
    scanf("%d",&n);
    int res = factorial(n);
    printf("Fact is %d ",res);
 }