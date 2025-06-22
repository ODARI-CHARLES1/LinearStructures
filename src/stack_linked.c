#include "stack_linked.h"
#include <stdio.h>
#include <stdlib.h>


bool initStackLinked(stack_linked *s){
    s->head=NULL;
    return true;
}

bool isEmptyStackLinked(stack_linked *s){
    return s->head==NULL;
}

bool pushStackLinked(stack_linked *s,int *value){
    stack_node *newNode=malloc(sizeof(stack_node));
    if(!newNode) return false;
    newNode->data=*value;
    newNode->next=s->head;
    s->head=newNode;
    return true;
}

bool popStackLinked(stack_linked *s,int *value){
    if(!s->head){
        return false;
    }
    stack_node *temp=s->head;
    *value=temp->data;
    s->head=temp->next;
    free(temp);
    return true;
}


int peekStackLinked(stack_linked *s){
    if(isEmptyStackLinked(s)){
        return false;
    }
    printf("top value:%d",s->head->data);
    return true;
}

void displayStack(stack_linked *s){
    if(!s->head){
        printf("Error occurred.");
    }
    stack_node *current=s->head;
    while (current!=NULL)
    {
        printf("->%d",current->data);
        current=current->next;
    }
}

