#include<stdio.h>

int main(){
   // In case of pointer to character 
char arr[]="pankaj";
char arr2[]="pankaj";
if(*arr==*arr2)
   printf("yes\n");
else
printf("No\n");
// In case of array of character 
char arr3[]="pankaj";
char arr4[]="pankaj";
if(arr3==arr4)
   printf("yes");
else
printf("No");
return 0;
}


    
