#include<stdio.h>
int main(){
    int a[4]={10,20,30,40};
   printf("%d\t",a);   //size-4 bytes
   printf("%d\t",&a);  //size-16 bytes
   printf("%d\t",a+1);   //size-4 bytes
   printf("%d\t",&a+1);  //size-16 bytes
    return 0;
}