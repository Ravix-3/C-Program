#include<stdio.h>
#include<string.h>
int main(){
    // char arr[10]="pankaj";
    // character array
    char arr[10];//arr1 is unintialised array
    strcpy(arr,"Pankaj");
    printf("Copied String is:%s\n",arr);
    

    // by using an pointer to character
    char arr1[10];//arr1 is unintialised array
    char *ptr="Hello Ravi";
    strcpy(arr1,ptr);
    printf("Copied string in array:%s\n",arr1);

    return 0;
}