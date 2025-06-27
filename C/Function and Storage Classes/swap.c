//call by value because actual agrument ki value pass ho thi hai function me 
#include<stdio.h>
int swap(int,int);
int main(){
    int a=10,b=20;
    printf("a=%d,b=%d",a,b);
    swap(a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return (x,y);
    
}
