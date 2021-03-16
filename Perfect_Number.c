#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,sum=0;
printf("Enter the value of n :");
scanf("%d",&n);

for ( i = 1; i <n; i++)
{
    if(n%i==0)
    {
        sum=sum+i;
    }

}
if(n==sum)
{
printf("%d is a Perfect Number",n);
}
else
{
printf("%d is not perfect Number",n);
}

return 0;
}