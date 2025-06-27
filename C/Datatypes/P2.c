#include<stdio.h>
int main()
{   int N;
printf("Enter the value of N");
scanf("%d",&N);

    printnos(N);
}
int printnos(int N)
{
    if(N==0)
    {
        return 0;
    }
    else{
        printnos(N-1);
        printf("%d",N); 
    }
}