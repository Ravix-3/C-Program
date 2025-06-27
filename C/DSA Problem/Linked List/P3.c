#include<stdio.h>
#include<stdlib.h>
// template of data structure 
struct Node{
    int Value;
    struct Node* link;
}*START=NULL;

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
first->value=10;
first->link=second;

second->data=20;
second->link=third;

third->data=30;
third->link=fourth;

fourth->data=40;
fourth->link=NULL;





return 0;
}