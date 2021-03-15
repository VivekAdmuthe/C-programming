#include<stdio.h>
#include<conio.h>
int main()
{
int n;
printf("Enter the number \n");
scanf("%d",&n);
int i=0;
while (i<=10)
{
 printf("%d*%d=%d\n",n,i,n*i);
 i++;
}

return 0;
}