#include<stdio.h>
int main(){
    int a[4]={10,20,30,40};
    printf("%d\t",*(a+1));
    printf("%d\t",a[1]);
    printf("%d\t",*(1+a));
    printf("%d\t",1[a]);
    return 0;
}
//20      20      20      20