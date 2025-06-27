// Array of structure
#include<stdio.h>
#include<string.h>
// Nested structure 
struct Date_Of_Birth{
    int day;
    int month;
    int year;
};
struct relation{
    char fatherName[20];
    char motherName[20];
};
struct student{
    char name[20];
    int roll;
    char gender;
    double mark[5];
    struct Date_Of_Birth DOB;
    struct relation parents;
};
int main(){
      struct student stu[4];
      strcpy(stu[0].name,"Harish");
      stu[0].roll=1;
      stu[0].gender='M';
      stu[0].DOB.day= 01;
      stu[0].DOB.month= 9;
      stu[0].DOB.year=2002;
printf("Sum of the size of members = %I32d bytes\n", sizeof(stu[0].name) 
+ sizeof(stu[0].roll) + sizeof(stu[0].gender) + sizeof(stu[0].mark)+
sizeof(stu[0].DOB.day)+sizeof(stu[0].DOB.month)+sizeof(stu[0].DOB.year));
    printf("Using sizeof() operator = %I32d bytes\n",sizeof(stu[0]));

return 0;
}