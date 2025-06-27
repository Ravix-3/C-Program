#include<stdio.h>
void fun(){
    static int i=0;
    ++i;
    printf("%d",i);
}
void main(){
  fun();
  fun();
  fun();
}
// o/p:123b
// value persist between different function call
// no redeclaration
// They are created only once in the program.