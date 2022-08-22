#include <stdio.h>
#include "stack.h"

int main()
{
    Stack a;
    a = create();
    push(a, 1);
    push(a, 10);

    Item popped;
    popped = pop(a);

    printf("%d", popped); 
    return 0;
}
