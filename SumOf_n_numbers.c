#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("Enter the value of n :");
scanf("%d",&n);

for ( i = 0; i <=n; i++)
{
    sum=sum+i;
}
printf("the sum of first %d numbers is :%d",n,sum);

return 0;
}