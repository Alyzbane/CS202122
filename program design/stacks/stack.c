#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack_type {
    Item *contents; //dynamic array
    Item top; //tracking the top of contents
    Item size; //allocating the contents
}; //init the stack only for this source file


static  void terminate (const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
Stack create_stack(Item size)
{
    //create a struct
    Stack s = malloc(sizeof(struct stack_type)); 
    if (s == NULL)
        terminate("Error in create_stack: memory full.");
    s->contents = malloc(size * sizeof(Item)); //eg. size = 5 * 4 (Item int)
    if (s->contents == NULL) {
        free(s);
        terminate("Error in create_stack: insufficient memory for size input.");
    }
    s->top = 0; //init the topmost
    s->size = size;
    return s; //return a pointer to the struct Stack
}
void destroy_stack (Stack s)
{
    free(s->contents); //removing all stack values in contents
    free(s); //removing the struct itself
}
void make_empty(Stack s)
{
    s->top = 0;
}
bool is_empty(Stack s)
{
    return s->top == 0;
}
bool is_full(Stack s)
{
    return s->top == s->size;
}
void push(Stack s, Item i)
{
    if(is_full(s))
        terminate("Error in push: stack is full.");
    s->contents[s->top++] = i;
}
Item pop(Stack s)
{
    if(is_empty(s))
        terminate("Error in pop: stack is empty.");
    return s->contents[--s->top];
}

