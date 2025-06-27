#include<stdio.h>
    extern int x;
void f(){
    //x=1a
    ++x;
    printf("%d",x);
}
int x=0;
void g(){
    //x=2
    ++x;
    printf("%d",x);
}
void main(){
    ++x;
    //x increment by 1
    f();
    g();
    printf("%d",x);
}