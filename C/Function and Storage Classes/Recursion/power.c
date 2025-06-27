#include<stdio.h>
 int power(int a,int b){
    if(b==0)
    return 1;
    else
    {
        return a*power(a,b-1);
    }
 }
 void main(){
    int i;
    i=power(5,4);
    printf("%d",i);
 }
