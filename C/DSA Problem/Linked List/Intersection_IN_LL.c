#include<stdio.h>
#include<stdlib.h>

// template of structure 
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
// number of nodes in a linked list
int countNode(struct Node*head){
    int count=0;
     struct Node *ptr=head;
     while (ptr)
     {
        count++;
        ptr=ptr->link;
     }
     return count;   
}
// function to create node
struct Node*createNode(int key){
    struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=key;
    new_node->link=NULL;
    return new_node;
}
int intersectionPoint(struct Node*head1,struct Node*head2){
    struct Node*ptr1,*ptr2;
    ptr1=head1;
    ptr2=head2;
    // length of linked list
    int l1,l2,diff;
    l1=countNode(head1);
    l2=countNode(head2);
    diff=abs(l1-l2);
    
    if(l1>l2){
        for(int i=1;i<=diff;i++)
            ptr1=ptr1->link;
        
    }
    else if(l2>l1){
        for(int i=1;i<=diff;i++)
            ptr2=ptr2->link;
          
    }
    while(ptr1!=ptr2){
        ptr1=ptr1->link;
        ptr2=ptr2->link;
    }
    if(ptr1!=NULL)
    {
       return ptr1->data;
    }
    return -1;
}
int main()
{  
    // Create two linked lists
    // 1st list: 10 -> 15 -> 30
    // 2nd list: 3 -> 6 -> 9 -> 15 -> 30
    // 15 is the intersection point
    struct Node*head1,*head2;
    // 1st list: 10 -> 15 -> 30
    head1=createNode(10);
    head1->link=createNode(15);
    head1->link->link=createNode(30);
    // 2nd list: 3 -> 6 -> 9 -> 15 -> 30
    head2=createNode(3);
    head2->link=createNode(6);
    head2->link->link=createNode(9);
    head2->link->link->link=head1->link;

    traversal(head1);
    traversal(head2);
    int intesecting_value=intersectionPoint(head1,head2);
    printf("intesecting_value:%d",intesecting_value);
    return 0;
}
