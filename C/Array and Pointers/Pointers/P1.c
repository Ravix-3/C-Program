#include<stdio.h>
int main()
{
int x=10;
int *p=&x;
printf("%d\t",x);
printf("%d\t",p);
printf("%d\t",*p);
return 0;
}