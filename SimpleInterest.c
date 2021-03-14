#include <stdio.h>
#include <conio.h>
int main()
{
    float principle, rate, year;
    printf("\n enter the principle amount :");
    scanf("%f", &principle);
    printf("\n enter the rate of simple interest :");
    scanf("%f", &rate);
    printf("\n enter the year of return :");
    scanf("%f", &year);
    float simpleInterest = (principle * rate * year) / 100;
    printf("\n the money of simpleinterest is equal to %f", simpleInterest);
    printf("\n the money with interest i have to return is equal to %f", simpleInterest+principle);
    return 0;
}