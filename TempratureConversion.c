#include<stdio.h>
#include<conio.h>
int main ()
{
 float celsius;
 
 printf("\nenter the temprature in celcius :");
 
 scanf("%f",&celsius);

 float fahrenheit=(celsius*9/5)+32;

 printf(" \nthe  temprature in fahrenheit is %f ",fahrenheit);

 return 0;
