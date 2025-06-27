// Note:value of pointer is updated from the location at where it is present.
#include<stdio.h>
int main(){
    int a[4]={10,20,30,40};
    int *p;
    p=&a[0];
    printf("%d\t",p);
    printf("%d\t",*p);
    // update value of pointer by 1
    p=p+1;
    printf("%d\t",p);
    printf("%d\t",*p);
    // update value of pointer by 2
    p=p+2;
    printf("%d\t",p);
    printf("%d\t",*p);
    // update value of pointer by -3
    p=p-3;
    printf("%d\t",p);
    printf("%d\t",*p);
    return 0;
}
// O/P: 6422284 10      6422288 20      6422296 40      6422284 10