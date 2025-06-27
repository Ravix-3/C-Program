#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    int *p,*q;
    p=&a[1];
    q=&a[4];


// q-p : the difference between the pointers give only the number of elements between them.
    printf("%d",q-p);
    

    return 0;
}