#include "stack_array.h"
#include <stdbool.h>

void initStack(Stack *s) {
    s->top = -1;
}

bool isEmpty(Stack *s) {
    return s->top == -1;
}

bool isFull(Stack *s) {
    return s->top == MAX_SIZE - 1;
}

bool push(Stack *s,int value){
    if(isFull(s)){
        return false;
    }
    else{
        s->top++;
        s->data[s->top]=value;
        return true;
    }
}

bool peek(Stack *s){
    if(isEmpty(s)){
        return false;
    }
    else{
        return true;
    }
}

bool pop(Stack *s,int *value){
    if(isEmpty(s)){
        return false;
    }
    else{
        *value=s->data[s->top];
        s->top--;
        return true;
    }
}
