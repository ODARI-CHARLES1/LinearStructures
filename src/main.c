#include<stdio.h>
#include<stdbool.h>
#include"stack_array.h"
#include "stack_linked.h"

int main(){
   stack_linked stack;
   int value=5;
   int value1=10;
   int value2=50;
   int value3=40;
   int value4=30;
   initStackLinked(&stack);
   pushStackLinked(&stack,&value);
   pushStackLinked(&stack,&value1);
   pushStackLinked(&stack,&value2);
   pushStackLinked(&stack,&value3);
   pushStackLinked(&stack,&value4);
   int data;
   if(popStackLinked(&stack,&data)){
    printf("poppedValue:%d",data);
   }
   else{
    printf("Stack underflow!");
   }
  displayStack(&stack);
   
 
   return 0;
}