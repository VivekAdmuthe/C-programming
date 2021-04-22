#include<stdio.h>

int main(){
    FILE *ptr;
     ptr = fopen("sample1.txt", "r"); //--> for reading the file
    ptr = fopen("sample1.txt", "w"); //--> for writing to a file
    fclose(ptr);
    return 0;
}