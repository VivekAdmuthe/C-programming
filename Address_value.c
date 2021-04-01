#include<stdio.h>
#include<conio.h>
int main()
{
int a=20;
int *n=&a;

printf("the address of variable a is %u\n",&a);
printf("the value of variable a is %d\n",a);
printf("the value of variable a is %d\n",*n);
printf("the address of variable n is %u\n",&n);
return 0;
} 