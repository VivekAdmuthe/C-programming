//Multiplication Table Order //
#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int n;
printf("Enter the value :");
scanf("%d",&n);
printf("The Multiplication Table Of %d is \n",n);
for(i=1;i<=10;i++){
    printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}