#include<stdio.h>
int main()
{
    int max;
    int arr[5]={1,2,3,4,5};
    max=0;
    for(int i=1;i<=5;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}