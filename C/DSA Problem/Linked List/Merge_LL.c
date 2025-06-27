#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data; 
    struct Node*link;
};
void traversal(struct Node*head){
    struct Node *ptr=head;
    
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}
struct Node*createNode(int key){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=key;
    new_node->link=NULL;
    return new_node;
}
struct Node* merged_LL(struct Node*head1,struct Node* head2){
    struct Node*ptr1,*ptr2,*head,*last;
    ptr1=head1;
    ptr2=head2;
    // finding a first node
    if(ptr1->data < ptr2->data){
        // ptr1 is a first node
        head=last=ptr1;
        ptr1=ptr1->link;
    }
    else{
        // ptr2 is a first node
        head=last=ptr2;
        ptr2=ptr2->link;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data){
            // ptr1 is small
            // resultant list ke end me apppend kar denge ptr1
            last->link=ptr1;
            last=ptr1;
            ptr1=ptr1->link;
        }
        else{
            // ptr2 is small
            // resultant list ke end me append kar denge ptr2
            last->link=ptr2;
            last=ptr2;
            ptr2=ptr2->link;

        }
    }
    // check for which linked list is not null
    if(ptr1!=NULL){
     last->link=ptr1;
    }
    else{
        last->link=ptr2;
    }
    return head;
}
int main(){
    // create two linked list
    // 1st list: 5-> 10 -> 15 -> 30
    // 2nd list: 2 -> 7 -> 12
    // resultant List:2-> 5-> 7-> 10 -> 12-> 15 -> 30 
 struct Node*head1,*head2;
 head1=createNode(5);
 head1->link=createNode(10);
 head1->link->link=createNode(15);
 head1->link->link->link=createNode(30);

 head2=createNode(2);
 head2->link=createNode(7);
 head2->link->link=createNode(12);
 traversal(head1);
 traversal(head2);
 struct Node*resultant_linkedList=merged_LL(head1,head2);
 traversal(resultant_linkedList);
 return 0;
}
// output of the program
/*
5       10      15      30
2       7       12
2       5       7       10      12      15   30
*/