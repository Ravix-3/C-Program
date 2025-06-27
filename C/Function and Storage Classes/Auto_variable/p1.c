#include<stdio.h>
int main(){
   int a=0;
   ++a;
   printf("%d",a);
   {
    // auto variable should need to be mention datatype of variable
     int a=10;
     ++a;
     printf("%d",a);
   }
   ++a;
   printf("%d",a);

  return 0;
}