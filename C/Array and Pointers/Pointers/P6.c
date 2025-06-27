// applying increment or decrement operator at pointers
#include<stdio.h>
int main(){
      int a[4]={10,20,30,40};
      int *p;
      p=&a[0];
      printf("%d\t",p);
      printf("%d\t",*p);
      ++p;
      printf("%d\t",p);
      printf("%d\t",*p);
      --p;
      printf("%d\t",p);
      printf("%d\t",*p);
    

    return 0;
}
// 6422284 10      6422288 20      6422284 10