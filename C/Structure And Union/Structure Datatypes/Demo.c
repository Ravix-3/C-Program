#include<stdio.h>
#include<string.h>
struct student {
    char name[20];
    int roll;
    char gender;
    int  marks[5];
};
int main(){
    /* Taking values for the user */
struct student stu[5];
for(int i = 0; i < 4; i++)
    {
        printf("Enter name:\n");
        scanf("%s",&stu[i].name);
        printf("Enter roll:\n");
        scanf("%d",&stu[i].roll);
        printf("Enter gender:\n");
        scanf(" %c",&stu[i].gender);

        for( int j = 0; j < 5; j++)
        {
            printf("Enter marks of %dth subject:\n",j);
            scanf("%d",&stu[i].marks[j]);
        }

        printf("\n-------------------\n\n");
    }

 /* Finding the average marks and printing it */

for(int i = 0; i < 4; i++)
    {
        float sum = 0;
        for( int j = 0; j < 5; j++)
        {
            sum += stu[i].marks[j];
        }

        printf("Name: %s\nAverage Marks = %.2f\n\n", stu[i].name,sum/5);
    }


    return 0;
}