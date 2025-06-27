#include<stdio.h>

int main(){
    int a=5,b;
    //pre-increment
    // b=++a;
    // 66

    //post-increment
    // b=a++;
    // 65

    //pre-decrement
    // b=--a;
    // 44

    //post-decrement
    b=a--;
    //45
    printf("%d%d",a,b);
    return 0;
}