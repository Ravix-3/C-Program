#include<stdio.h>
int main(){
    int i=10;
    int x;
    x = i++ + ++i + i++ + ++i + ++i;
    printf("%d\t%d",x,i);
    return 0;
}
