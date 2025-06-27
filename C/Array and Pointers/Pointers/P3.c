#include<stdio.h>
int main(){
    char x='A';
    char *p;
    p=&x;
    printf("%d\t",p);
    printf("%c",*p);
    return 0;
}