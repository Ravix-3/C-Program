#include<stdio.h>
#include<string.h>
int main(){
    char str1[10]="Ram";
    char str2[10]="RaM";
    int result=strcmp(str1,str2);
    if(result==0)
     printf("Matched string");
    else
     printf("Unmatched");
    return 0;
}