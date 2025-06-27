// Linear Search
#include<stdio.h>
int linear_Search(int arr[],int size)
{
    for(int i=1;i<=size;i++)
    {
        if(arr[i]==i)
        {
            return arr[i];
        }   
    }
    return -1;
}
int main(){
    int arr[]={-100,-80,-70,-50,-3,-2,-1,2,5,8,9,10,11,15,20,21,80,85,88,100,150,160,170,180,200};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    
    int result = linear_Search(arr, size); // Pass array and size
    
    if (result != -1) {
        printf("Element found: %d", result);
    } else {
        printf("No element found where arr[i] == i");
    }
    return 0;
}