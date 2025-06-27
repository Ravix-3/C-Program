#include<stdio.h>
#include<stdlib.h>
// template of the doubly linked list
struct Node{
    struct Node*prev;
    int data;
    struct Node*next;
}*START=NULL;
void forwardtraversal(){
  struct Node*ptr=START;
  while(ptr!=NULL){
    printf("%d\t",ptr->data);
    ptr=ptr->next;
  }
  printf("\n");
}
int main(){
  struct Node*first,*second,*third,*fourth;
  first=(struct Node*)malloc(sizeof(struct Node));
  second=(struct Node*)malloc(sizeof(struct Node));
  third=(struct Node*)malloc(sizeof(struct Node));
  fourth=(struct Node*)malloc(sizeof(struct Node));

  START=first;

  first->prev=NULL;
  first->data=10;
  first->next=second;

  second->prev=first;
  second->data=20;
  second->next=third;

  third->prev=second;
  third->data=30;
  third->next=fourth;

  fourth->prev=third;
  fourth->data=40;
  fourth->next=NULL;
  forwardtraversal();
  return 0;

}