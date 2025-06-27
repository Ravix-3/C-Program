#include<stdio.h>
#include<stdlib.h>
struct node{ 
    int data;
    struct node* link;
}*START=NULL;

void traversal(){
    struct node *ptr=START;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
// deletion from the end

void delete_lastNode(){
    // START is a global variable
    if(START==NULL)
     return;
    struct node* ptr=START;
    // for a single node 
    if(START->link==NULL){
        START=NULL;
        free(ptr);
        return;
    }
    while(ptr->link->link!=NULL){
        ptr=ptr->link;
    }
        free(ptr->link);
        ptr->link=NULL;
    
} 
int main(){
    struct node*first;
    struct node*second;
    struct node*third;
    struct node*fourth;
    
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));;
   
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
    delete_lastNode();
    printf("\n");
    traversal();
    return 0;
}