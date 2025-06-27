#include<stdio.h>
#include<stdlib.h>
// template of the doubly linked list
struct Node{
    struct Node*prev;
    int data;
    struct Node*next;
};

// creating a node in a doubly linked list
struct Node*createNode(int key){
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=key;
    newNode->prev=NULL;
    newNode->next=NULL;
    return newNode;
}
// traversal forward direction
void forwardTraversal(struct Node*head){
    struct Node*ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
// traversal backward direction
void backwardTraversal(struct Node*tail){
    struct Node*ptr=tail;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->prev;
    }
    printf("\n");
}
int main(){
    // creating a single doubly linked list
    struct Node*first,*second,*third,*fourth;
    first=createNode(10);
    second=createNode(20);
    third=createNode(30);
    fourth=createNode(40);

    first->next=second;
    second->prev=first;
    second->next=third;
    third->prev=second;
    third->next=fourth;
    fourth->prev=third;
    forwardTraversal(first);
    backwardTraversal(fourth);
   
    return 0;
}