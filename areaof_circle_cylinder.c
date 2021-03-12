#include <stdio.h>
#include <conio.h>
int main()
{
  float rad;
  float pi = 3.14;
  printf("enter the value of rad \n :");
  scanf("%f", &rad);
  printf("the area of circle is %f \n", pi * rad * rad);

  float height;
  printf("enter the value of height \n :");
  scanf("%f",&height);
  printf("the volume of cylinder is %f cmcube \n", pi * rad * rad * height);

  return 0;
}