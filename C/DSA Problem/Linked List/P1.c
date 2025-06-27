#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* link;
}*START=NULL;

void traversal(){
     struct Node* ptr;
     ptr=START;
     while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;

     }
}
void countNode(){
    int count=0;
    struct Node*ptr=START;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("Number of Node:%d",count);
}
void lastNode_Data(){
    struct Node*ptr=START;
    if(START==NULL)//no node or no last node
      return;
    while(ptr->link!=NULL){
         ptr=ptr->link;
    }
   printf("Element:%d",ptr->data);
}

void secondLastnode_Data(){
    struct Node *ptr=START;
      if(START==NULL||ptr->link==NULL)
       {
        return;
       }
      while (ptr->link->link!=NULL)
      {
        /* code */
        ptr=ptr->link;
      }
      printf("Second last Node data:%d",ptr->data);   
}
void search(int key){
    struct Node*ptr=START;
    while(ptr!=NULL){
        if(ptr->data==key)
        {
          printf("Yes");
          return ;
        }
            
        ptr=ptr->link;
    }
    printf("No such is found");
}
void alternateNode_Data(){
    struct Node*ptr=START;
    
    while(ptr!=NULL&& ptr->link!=NULL)
    {
        printf("Element:%d\t",ptr->data);
        ptr= ptr->link->link;
    }
    if(START==NULL)
    return ;
    if(ptr->link==NULL)
    printf("Element:%d",ptr->data);
}
int main(){
    // linked list node creation code 
    struct Node* first;
    struct Node* second;
    struct Node* third;
    
    // Allocate  memory of node in a heap
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    START=first;
    first->data=10;
    first->link=second;

    second->data=20;
    second->link=third;

    third->data=30;
    third->link=NULL;
    traversal();
    printf("\n");
    countNode();
    printf("\n");


    lastNode_Data();
    printf("\n");
    secondLastnode_Data();
    printf("\n");
    search(20);
    printf("\n");
    alternateNode_Data();
    return 0;
}
