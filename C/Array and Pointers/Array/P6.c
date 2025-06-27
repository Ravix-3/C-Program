// using Binary search 
#include <stdio.h>
int Binary_Search(int arr[],int i,int j){
    while(i<=j)
    {
        if(i==j)//for single element in an array
        {
          if(arr[i]==i)
          {
            return arr[i];
          }
          else
          {
            return -1;
          }
        }
        else//for a big problem 
        {
            int mid=(i+j)/2;
            if(arr[mid]==mid)            //Mid is a[i]==i
            {
                return mid;
            }
            else
            {   //value=arr[mid],position=mid;
              if(arr[mid]<mid)
              {
                i=mid+1;
              } 
              else
              {
                j=mid-1;
              }    
            }
            
        }
    }
}



int main()
{
    int arr[]={-100,-80,-70,-50,-3,-2,-1,2,5,8,9,11,14,15,20,21,80,85,88,100,150,160,170,180,200};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int i=1;
    int j=size;
    int result = Binary_Search(arr,i,j); // Pass array and index
    
    if (result != -1) {
        printf("Element found: %d", result);
    } else {
        printf("No element found where arr[i] == i");
    }

    return 0;
}
