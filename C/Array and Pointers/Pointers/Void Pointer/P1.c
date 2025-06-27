Note:
// Don't try to dereference any void pointer without typecasting
// do not apply a arithmetic operations on void Pointer
#include<stdio.h>
int main(){
    void *ptr;
    int i=369;
    char ch='A';
    ptr=&i;
    // dereferencing 'void *' pointer by typecasting to int.
    printf("%d\t",*(int *)ptr);
    ptr=&ch;
    // dereferencing 'void *' pointer by typecasting to int.
    printf("%c\t",*(char *)ptr);
    return 0;
}