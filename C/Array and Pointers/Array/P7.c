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
    int arr[]={-100,-2,-1,0,1,2,4,6,9,9,10,11,13,13,13};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    
    int result = linear_Search(arr, size); // Pass array and size
    
    if (result != -1) {
        printf("Element found: %d", result);
    } else {
        printf("No element found where arr[i] == i");
    }
    return 0;
}