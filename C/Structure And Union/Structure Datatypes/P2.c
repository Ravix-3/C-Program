#include<stdio.h>
#include<string.h>
// 2nd way of declaring an structure.
 typedef struct student{
    char name[20];
    int rollno;
}STUDENT;
int main(){
STUDENT s1,s2;
    strcpy(s1.name,"Pankaj Sharma");
    strcpy(s2.name,"Vijay Kumar");
    s1.rollno=10;
    s2.rollno=20;
    printf("Details of Student:\n");
    printf("%s\t",s1.name);
    printf("%d\t\n",s1.rollno);
    printf("%s\t",s2.name);
    printf("%d\t",s2.rollno);
    return 0;
}