#include<stdio.h>
int main()
{  
    int a;
    int b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    swap(a,b);
    
    
}
int swap(int a,int b)
{
 a=a+b;
 b=a-b;
 a=a-b;
 printf(a="%d",b="%d",a,b);
 return(a,b);
}