#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee Vivek = {1008, 35000,"Vivek Admuthe"};

    printf("Code is: %d \n", Vivek.code);
    printf("Salary is: %f \n", Vivek.salary);
    printf("Name is: %s \n", Vivek.name);
 

    return 0;
}