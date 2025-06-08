#include<stdio.h>
#include<stdbool.h>
#include"stack_array.h"


int main(){
    Stack s;
    initStack(&s);
    push(&s,55);
    push(&s,67);
    push(&s,50);
    int value;
    if(pop(&s,&value)){
        printf("value:%d\n",value);
    }
    else{
        printf("error in peek operation");
    }
    printf("%d",s.top);
    printf("%d",s.data[s.top]);
    return 0;
}