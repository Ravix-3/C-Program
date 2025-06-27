#include<stdio.h>
int main(){
   int x=1008;
   int *p;
   p=&x;
//    output:1008
   printf("%d",*p);
//  10  
   *p=10;
    printf("%d",*p);
// x=10
printf("%d",x);
    return 0;
}