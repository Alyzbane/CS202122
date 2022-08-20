#include <stdio.h>
#include "stack.h"

int main()
{
    Stack a; //init a stack pointer to stack_type 

    a = create_stack(10); //VLA array
    push(a, 1);
    push(a, 10);
    push(a, 15);
    
    a = create_stack(20);

    Item popped = pop(a);
    
    printf("Stack pull: %d", popped);
    return 0;
}
