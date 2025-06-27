#include<stdio.h>
#include<stdlib.h>
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
void print(struct node *ptr){
    if(ptr){
        print(ptr->link);
        printf("%d\t",ptr->data);
    }
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
    print(START);
    printf("\n");
    traversal();
    return 0;
}