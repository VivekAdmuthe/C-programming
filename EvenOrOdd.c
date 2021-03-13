#include<stdio.h>
#include<conio.h>
int main()
{
  int a;
  printf("enter the a : ");
  scanf("%d",&a); 

  if(a%2==0)
  {
  printf("%d is even",a);
  }
  else
  {
  printf("%d is odd",a);
  }
  return 0;

}