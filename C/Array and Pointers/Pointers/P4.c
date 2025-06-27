#include<stdio.h>
int main(){
    // x=20,300,130,400
    int x=400;
    char *p;
    p=(char*)&x;
    printf("%d\t",p);
    printf("%d",*p);
  

    return 0;
}