// inserting nodes at the begining of Linked list
#include<stdio.h>
#include<stdlib.h>
// template of data structure 
struct Node{
    int data;
    struct Node* link;
}*START=NULL;//START is a global variable

void Insertion_at_begin(int key){
     struct Node*ptr;
     ptr=(struct Node*)malloc(sizeof(struct Node));
     if(ptr){
        ptr->data=key;
        ptr->link=START;
        START=ptr;
     }
}
void traversal(){
    struct Node*ptr=START;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
int main(){
//  Declaring node of linked list 
struct Node* first;
struct Node* second;
struct Node* third;
struct Node* fourth;

// allocating dynamic memory to the node
first=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));

// pointing the special variable START to the first node
START = first;

// initializing the node
first->data=10;
first->link=second;

second->data=20;
second->link=third;

third->data=30;
third->link=fourth;

fourth->data=40;
fourth->link=NULL;
// Linked list before traversal
traversal();
printf("\n");
Insertion_at_begin(100);
traversal();
return 0;
}