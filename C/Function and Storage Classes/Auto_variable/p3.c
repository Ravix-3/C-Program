#include<stdio.h>

int main(){
   int a=0;
   ++a;
   {
    int a=10,b=20;
    ++a;
    ++b;
    printf("%d",a+b);
   }
   ++a;
   printf("%d",a+b);
    return 0;
}
