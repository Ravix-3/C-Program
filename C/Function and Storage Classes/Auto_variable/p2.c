#include<stdio.h>

int main(){
    int a=0;
    ++a;
    printf("%d",a);
    {
       ++a;
       printf("%d",a);    
    }
    ++a;
    printf("%d",a);
    return 0;
}
