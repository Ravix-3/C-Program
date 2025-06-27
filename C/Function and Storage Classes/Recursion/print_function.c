// print n times 
#include<stdio.h>
void print_name(int n){
    if(n==1)
        printf("Pankaj");
    else{
        printf("Pankaj");
        print_name(n-1);
    }
}
int main(){
    print_name(10);
    return 0;
}