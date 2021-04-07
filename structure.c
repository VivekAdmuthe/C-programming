#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
   
    // employee e1;
    // e1.salary = 34454; --->wont work without employee structure

    struct employee e1;
    e1.code = 1008;
    e1.salary = 34454;
    // e1.name = "Ramesh"; --> wont work
    strcpy(e1.name, "Ramesh");

    printf("employee code : %d\n", e1.code);
    printf("salary : %.3f\n", e1.salary);
    printf("name : %s\n", e1.name);

    return 0;
}