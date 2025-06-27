#include<stdio.h>
void reverse_number(int n){
    if(n<=0)
    return;
    printf("%d",n);
    reverse_number(n-1);
}
void main(){
    int num;
    printf("Enter the last number:");
    scanf("%d",&num);
    reverse_number(num);
}