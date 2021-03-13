#include<stdio.h>
#include<conio.h>
int main()
{
// determine wether number is divisible by 97 or not //

int num;
int divider;
printf("enter the number : ");
scanf("%d",&num);
printf("enter the divider:");
scanf("%d",&divider);
printf("the remainder of %d/%d is = %d\n",num,divider,num%divider);

return 0;
}