#include<stdio.h>
#include<string.h>
int main(){
    // in-built function in a string strlrn, strcat,strcmp,strcpy
    // character array
    char arr[10]="pankaj";
    int i;
    i=strlen(arr);
    printf("string length:%d\n",i);

    // pointer to character 

    char *ptr="Neeraj";
    int m=strlen(ptr+2); 
    printf("String length:%d\n",m);
    
    // sub-operation of pointer to array
  
    return 0;
}