#include<stdio.h>
#include<string.h>
int main(){
    printf("%s\t","Hello");
    printf("%s\t","Hello"+1);
    printf("%c",*("Hello"+1));
    return 0;
}