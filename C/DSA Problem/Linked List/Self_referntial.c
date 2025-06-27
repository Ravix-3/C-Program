#include<stdio.h>
#include<stdlib.h>
// self referential structure
struct Pankaj
{
    //member of struct pankaj datatype
    int a;
    struct Pankaj *ptr;
};

int main()
{
    struct Pankaj s1,s2,s3;
    s1.a=10;
    s2.a=20;
    s3.a=30;
    s1.ptr=&s2;
    s2.ptr=&s3;
    s3.ptr=NULL;
    return 0;
}