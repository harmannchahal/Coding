# include <stdio.h>
int main() 
{ 
int *p; 
int a = 10; 
p = &a; 
printf("%d\n",(*p)+1); // 11 ,p is not changed 
printf("before *p++ %p\n",p); //address of p 
printf("%d\n",*p++); // same as *p and then p++ i.e 10 
printf("after *p++ %p\n",p); 
return 0;
}