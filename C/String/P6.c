#include<stdio.h>
#include<string.h>
int main(){
// string concatenation in a initialised array
    char arr[30]="Hello sonu baby ";
    char *ptr1="What's up";
    strcat(arr,ptr1);
    printf("Given message:%s",arr);
  
    

    return 0;
}