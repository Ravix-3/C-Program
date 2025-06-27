// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node {
    int data;
    struct node *link;
} *START = NULL;

// Function to traverse and print the linked list
void traversal() {
    struct node *ptr = START;
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->link;
    }
}

// Function to reverse the linked list
void reverseLinkedList() {
    struct node *prev = NULL, *curr = START, *nex = NULL;
    
    while (curr != NULL) {
        nex = curr->link;    // Save the next node
        curr->link = prev;   // Reverse the link
        prev = curr;         // Move prev to current node
        curr = nex;          // Move current to next node
    }
    
    START = prev;  // Update START to the new head
}

int main() {
    // Allocate memory for nodes and set data
    struct node *first, *second, *third, *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Initialize START and link the nodes
    START = first;

    first->data = 10;
    first->link = second;

    second->data = 20;
    second->link = third;

    third->data = 30;
    third->link = fourth;

    fourth->data = 40;
    fourth->link = NULL;

    // Traversing and printing the original linked list
    printf("Original Linked List:\n");
    traversal();
    
    // Reverse the linked list
    reverseLinkedList();
    
    // Traversing and printing the reversed linked list
    printf("\nReversed Linked List:\n");
    traversal();
    
    return 0;
}