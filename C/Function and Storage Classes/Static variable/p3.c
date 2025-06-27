// 4. Consider the following program:
#include<stdio.h>
void f(int x,int y){
static int a=3;
int b=5;
a-=b++;
printf("%d\t%d\n",a,b);
}
int main()
{
static int a=2;
int b=1;
f(a,b);
a+=3;
f(a,b);
printf("%d\t%d", a,b);
return 0;
}
