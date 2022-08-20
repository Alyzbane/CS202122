#include <stdlib.h>
#include "header.h"


struct stack_type {
    int val;
}; //defining the members of struct for this file only

stack create(void)
{
    stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        exit(0);
    return s;
}
void pantsu(stack s)
{
    s->val = 1;
}
