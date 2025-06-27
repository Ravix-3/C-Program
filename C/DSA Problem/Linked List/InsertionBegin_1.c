// inserting nodes at the begining of Linked list
#include<stdio.h>
#include<stdlib.h>
// template of data structure 
struct Node{
    int data;
    struct Node* link;
};

void Insertion_at_begin(struct Node* start,int key){
     struct Node*ptr;
     ptr=(struct Node*)malloc(sizeof(struct Node));
     if(ptr){
        ptr->data=key;
        ptr->link=start;
        start=ptr;
     }
}
void traversal(struct Node* start){
    struct Node*ptr=start;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
}
int main(){
//  Declaring node of linked list 
struct Node* START=NULL;
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
traversal(START);
printf("\n");
// call by value...
Insertion_at_begin(START,100);
traversal(START);
return 0;
}