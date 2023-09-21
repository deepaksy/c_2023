#include<stdio.h>
#include<stdlib.h>
#define MAX 10
/**
 * A Stack is a linear data structure that follows Last-in-First-out(LIFO).
 * Last element to enter leaves first.
 * ex: Stack of plates
 * OPERATIONS
 * - push
 * - pop
 */

struct stack{
    int items[MAX];
    int top;
};
typedef struct stack stack;

void createEmptyStack(stack *st){
    st->top=-1;
}

//check isfull
int isfull(stack *st){
    if(st->top == MAX-1){
        return 1;
    }
    return 0;
}

int isempty(stack *st){
    if(st->top==-1){
        return 1;
    }
    return 0;
}

void push(stack *st, int newitem){
    st->top++;
    st->items[st->top] = newitem;
}
int pop(stack *st){
    int item =st->items[st->top];
    st->items[st->top]=0;
    st->top--;
    return item;
}

int peek(stack *st){
    return st->items[st->top];
}
int main(){
    stack *st;
    st = (stack*)malloc(sizeof(stack));
    createEmptyStack(st);
    push(st,1);
    push(st,2);
    printf("%d",peek(st));
    return 0;
}