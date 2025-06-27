#include<stdio.h>
#include<string.h>
struct student {
    char name[20];
    int rollno;
};
int main(){
    struct student s1={"Ravi Chauhan",10};
    struct student s2={"Santosh Chauhan",20};
    printf("%s\t",s1.name);
    printf("%d\n",s1.rollno);
    printf("%s\t",s2.name);
    printf("%d",s2.rollno);
    return 0;
}