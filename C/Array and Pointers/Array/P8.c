//Problem statement
// I/P:An array of n-element in which until some postion x all are integers and after x all are #.
// O/P: Find postion of 1st -#.
#include<stdio.h>

int binary_search(char arr[],int i,int j)
{
    while (i<=j)
    {
       int mid=(i+j)/2;
       if(arr[mid]=='#')
       {
        if(arr[mid-1]=='#')
        {
            j=mid-1;
        }
        else
        {
            return mid;
        }
       }
       else
       {
        i=mid+1;
       }
    }
    return -1;
}
int main()
{
    char arr[]={'1','2','3','4','5','8','5','#','#','#','#','#','#','#','#','#'};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=1;
    int j=size;
    int pos=binary_search(arr,i,j);
    if(pos!=-1)
    {
        printf("Element Index:%d",pos);
        
    }
    else
    {
        printf("No Such Element");
    }
    return 0;
}