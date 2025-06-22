#ifndef STACK_LINKED_H
#define STACK_LINKED_H

#include <stdbool.h>
typedef struct node
{
   int data;
   struct node *next;
}stack_node;

typedef struct{
   stack_node *head;
} stack_linked;

bool isEmptyStackLinked(stack_linked *s);
//bool isFull(stack_linked  *s); can be implemented when the stack has max_size......
bool initStackLinked(stack_linked *s);
bool pushStackLinked(stack_linked *s, int *value);
bool popStackLinked(stack_linked *s,int *value);
int peekStackLinked(stack_linked *s);
void displayStack(stack_linked *s);
#endif