#include<stdio.h>
#include<conio.h>
int main()
{

int physics,chemistry,maths;
float percentage;
printf("enter the Physics marks \n ");
scanf("%d",&physics);

printf("enter the chemistry marks \n ");
scanf("%d",&chemistry);

printf("enter the maths marks \n ");
scanf("%d",&maths);

percentage=(physics+chemistry+maths)/3;
if( (percentage<35) || physics<35 || chemistry<35 || maths<35 )
{
printf("your percentage is %f and you are failed",percentage);
}
else{
    printf("your percentage is %f and you are passed",percentage);
}
return 0;
}