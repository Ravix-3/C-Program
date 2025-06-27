#include<stdio.h>
int add(int num1,int num2){
    return num1 + num2 ;
}
int sub(int num1,int num2){
    return num1 - num2 ;
}
int mul(int num1,int num2){
    return num1 * num2 ;
}
int div(int num1,int num2){
    return num1 / num2 ;
}
int mod(int num1,int num2){
    return num1 % num2 ;
}
int main(){
    int x,y,s;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    s=add(x,y);
    printf("output:%d",s);
    return 0;
}
