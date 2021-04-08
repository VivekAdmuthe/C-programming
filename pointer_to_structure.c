#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; //or you can also write: ptr->code = 101;
    ptr->code = 1001;
    ptr->salary=35000;
    strcpy(ptr->name, "Vicky");
    printf("employee code is :%d\n", e1.code); 
    printf("employee salary is :%f\n", e1.salary); 
    printf("employee name is :%s\n", e1.name);  
    return 0;
}