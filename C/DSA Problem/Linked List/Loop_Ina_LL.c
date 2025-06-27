//  Program  to find a loop in a linked list, if found return 1, else return 0.
// Boolean in C
/*In C, the bool data type is not a built-in data type. However, 
the C99 standard for C language supports bool variables.
 Boolean can store values as true-false, 0-1, or can be yes-no
 . It can be implemented in C using different methods as mentioned below:*/

// Using header file “stdbool.h”
// Using Enumeration type
// Using define to declare boolean values
// typedef enum { false, true } bool;
#include<stdio.h>
#include<stdlib.h>
// #include <stdbool.h>
typedef enum { false, true } bool;
struct node{
    int data;
    struct node*link;
}*START=NULL;
void traversal(){
    struct node *ptr=START;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
bool findloop(){
    struct node*slow,*fast;
    slow=fast=START;
    if(START==NULL)
    {
        return false;
    }
    while((fast!=NULL)&&(fast->link!=NULL))
    {
      slow=slow->link;
      fast=fast->link->link;
      if(slow==fast)
      {
        return true;
      }
    }
    return false;

}
int main(){
    struct node *first,*second,*third,*fourth;
    
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    START=first;

    first->data=10;
    first->link=second;

    second->data=20;
    second->link=third;

    third->data=30;
    third->link=fourth;

    fourth->data=40;
    fourth->link=NULL;
    
    traversal();
    printf("\n");
   
    if(findloop())
    {
        printf("found Loop");
    }
    printf("Not found loop");
    printf("\n");
    traversal();
    return 0;
}