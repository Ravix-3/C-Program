#include<stdio.h>
#include<stdlib.h>

// template for creating structure variables
struct Node{
    int data;
    struct Node* link;
};
 void insert_at_begin(struct Node** start,int key){
    struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
    if(ptr){
        ptr->data=key;
        ptr->link=*start;
        *start=ptr;
        }
}
void traversal(struct Node*start){
    struct Node*ptr=start;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }

}
int main(){
    // START is a local variables
    struct Node* START;
    struct Node* first;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;

    // allocating dynamic memory
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    START=first;
    first->data=10;
    first->link=second;

    second->data=20;
    second->link=third;

    third->data=30;
    third->link=fourth;

    fourth->data=40;
    fourth->link=NULL;
    traversal(START);
    insert_at_begin(&START,100);
    printf("\n");
    traversal(START);

 return 0;
}