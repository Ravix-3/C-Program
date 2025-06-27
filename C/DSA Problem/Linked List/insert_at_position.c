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
void insert_at_postionAfterMiddle(int key){
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=key;
    temp->link=NULL;
    ptr=START;
    if(START==NULL)
    { 
        START=temp;
        return;
    }
    if(START->link==NULL){
        ptr->link=temp;
        return;   
    }
    int count=0,i=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    ptr=START;
    printf("\nCount:%d",count);
    int middle=count/2;
    printf("\nMiddle:%d",middle);
    for(i=1;i<=middle;i++){
        ptr=ptr->link;
    }
    temp->link=ptr->link;
    ptr->link=temp;
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
    insert_at_postion(100);
    printf("\n");
    traversal();
    return 0;
}