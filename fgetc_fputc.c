#include<stdio.h>

int main(){
    FILE *ptr;

    ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr);
    putc('s', ptr);
    putc('k', ptr);
    fclose(ptr);
    return 0;
}