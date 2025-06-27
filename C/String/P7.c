#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str1[30]="Hello";
    char str2[30]="babli";

    printf("Length of str1:%d and str2:%d\n",strlen(str1),strlen(str2));
    
    strcat(str1,str2);
    printf("Concatenated string:%s\n",str1);
    printf("Length of string  1 after concatenation:%d\n",strlen(str1));
    int result=strcmp(str1,str2);
    if(result == 0)
      printf("Equal string");
    else
      printf("String are not Equal");
    return 0;
}