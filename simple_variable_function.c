#include<stdio.h>
void try(int *x)
{
    *x = 11;
}

int main()
{
    int x = 10;
    try(&x);
    printf("%d",x);
    return 0;
}