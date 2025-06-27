#include<stdio.h>
#include<stdlib.h>

// template for structure variables
struct node{
    int data;
    struct node* link;
}*START=NULL;
// insert at end of the linked list
void insert_at_end(int key){
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    ptr=START;
    if(temp){
        temp->data=key;
        temp->link=NULL;
        if(START==NULL){
            START=temp;
            return;
        }
        while(ptr->link!=NULL){
            ptr=ptr->link;
        }
        ptr->link=temp;
    }
}
void traversal(){
    struct node* ptr=START;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
int main(){
    // declaration of nodes
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Dynamic memory allocating to the nodes
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    
    // pointing START pointer variables to the first variables
    START=first;

    // initializing the nodes
    first->data=10;
    first->link=second;

    second->data=20;
    second->link=third;

    third->data=30;
    third->link=fourth;

    fourth->data=40;
    fourth->link=NULL;
    traversal();
    insert_at_end(50);
    printf("\n");
    traversal();
return 0;
}