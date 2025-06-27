#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
// template of stack data structure
struct Stack{
    int top;
    int *array;
    int size;
};
// function to create a stack 
struct Stack *createStack(unsigned size){
    struct Stack *stack=(struct Stack*)malloc(sizeof(struct Stack));
    stack->top=-1;
    stack->size=size;
    stack->array=(int *)malloc(stack->size*sizeof(int));
    return stack;
}
// check if stack is empty fuction
int isEmpty(struct Stack *stack){
    return stack->top==-1;
}
// check if stack is full
int isFull(struct Stack *stack){
    return stack->top==stack->size-1;
}
// Pushing an element in a stack
void push(struct Stack *stack, int element){
    if(isFull(stack))
     return ;
    // stack->top=stack->top+1;
    
    
    stack->array[++stack->top]=element;
    printf("%d pushed into stack\n",element);
}
int pop(struct Stack * stack){
    if(isEmpty(stack))
    return INT_MIN;
    return stack->array[stack->top];
    --stack->top;
}
int main(){
    struct Stack *stack=createStack(100);
    push(stack,20);
    push(stack,30);
    push(stack,40);
    push(stack,50);
    printf("%d Popped elements from stack\n",pop(stack));
    return 0;
}
