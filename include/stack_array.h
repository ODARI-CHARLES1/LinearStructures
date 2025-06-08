#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H

#include<stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;

}Stack;

void initStack(Stack *s);
bool isFull(Stack *s);
bool isEmpty(Stack *s);
bool peek(Stack *s);
bool push(Stack *s,int value);
bool pop(Stack *s,int *value);

#endif

