#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
    Item data;
    struct node *next;
}; //defining the members of stack_type (incomplete in header file)

struct stack_type {
    struct node *top; 
};

static  void terminate (const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}
Stack create (void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL){
        terminate("Error: Full memory");
        exit(EXIT_FAILURE);
    }
    s->top = NULL;
    return s;
}
void destroy(Stack s)
{
    make_empty(s);
    free(s);
}
void make_empty(Stack s)
{
    while(!is_empty(s)) //struct size has no limit depending on memory
        pop(s);
}
bool is_empty(Stack s)
{
    return s->top == NULL;
}
bool is_full(Stack s)
{
    return false;
}
        //the node where I want to push the value of n 
bool push(Stack s, Item i) //return true if stack has memory or false if not 
{
    struct node *new_node = malloc(sizeof(struct node));
    if(new_node == NULL)
        terminate("Error in push: stack is full.");
    new_node->data = i;
    new_node->next = s->top; //new node point to top node ptr
    s->top = new_node; //point to the newest node 
}
Item pop(Stack s) //function returning a pointer to the value
{
    struct node *old_top;
    Item i;

    if(is_empty(s))
        terminate("Error in pop: stack is empty.");
    
    old_top = s->top;
    i = old_top->data;
    s->top = old_top->next;
    free(old_top);
    return i;
}
