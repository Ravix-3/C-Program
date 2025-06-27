#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 1 st way of declaring an structure datatype .
    struct student
    {
        //No memory is allocated , It is just like an template , blueprint.
        char name[20];
        int roll;
        char FatherName[20];
        char Address[40];
    };
int main(){
    struct student s={"Ravi Kumar",1,"Harishankar Prasad","A-112 Vimal Nagar,Lucknow"};
    printf("%s\t%d\t%s\t%s\n",s.name,s.roll,s.FatherName,s.Address);
    struct student s1;
    strcpy(s1.name,"Vijay kumar");
    s1.roll=2;
    printf("%s\t%d\t%s\t%s",s1.name,s1.roll,s1.FatherName,s1.Address);
    

   return 0; 
}