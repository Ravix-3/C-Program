#include<stdio.h>
int main(){
    int arr[3][4];
    printf("%d\t",sizeof(int));
    printf("%d\t",&arr[0][0]);
    printf("%d",&arr[2][3]);
    return 0;
}