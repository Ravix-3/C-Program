#include<stdio.h>
int main(){
    int a;
    a=printf("Hello")||printf("Gate")&&printf("2023");
    printf("%d",a);
    return 0;
}