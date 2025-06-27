#include<stdio.h>
void fun(){
    int a=0;
    static int b=0;
    ++a;
    ++b;
    printf("%d%d",a,b);
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}
