#include<stdio.h>

int sum_digits(int n){
        if(n>0&&n<=9)
        return n;
        else{
            return n%10 + sum_digits(n/10);
        }
}
void main(){
    int s, sum;
    scanf("%d",&s);
    sum=sum_digits(s);
    printf("%d",sum);
}