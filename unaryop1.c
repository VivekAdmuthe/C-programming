#include<stdio.h>
#include<conio.h>
int main()
{

int a,b,c;
a=3;
b=6;
c=a+ ++b;
printf("c=%d,a=%d,c=%d",c,a,b);

c=a+ b++;
printf("\n c=%d,a=%d,b=%d",c,a,b);

c=a+ --b;
printf("\n c=%d,a=%d,b=%d",c,a,b);

c=a+ b++;
printf("\n c=%d,a=%d,b=%d",c,a,b);

return 0; 


}