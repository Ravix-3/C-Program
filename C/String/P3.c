#include<stdio.h>
#include<string.h>
int main(){
//   multiple string
// using a array of character 
  char name[3][12]={"Amit","Rahul","balamukhanda"};
  printf("%s\t",name);
  printf("%s\t",*name);
  printf("%s\t",name[0]);
  printf("%s\t",&name[0][0]+1);
  
// in Case of pointer to character
char *namen[3]={"Amit","Rahul","Balamukanda"};
  printf("%s\t",*namen);
  printf("%s\t",namen[0]);
  printf("%s\t",&namen[0][0]+1);
  printf("%s\t",namen[0]+1);
  printf(*namen+1);
  return 0;
}