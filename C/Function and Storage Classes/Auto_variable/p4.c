#include<stdio.h>
int fun(){
    int a=0;
     ++a;
    printf("%d",a);
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}
