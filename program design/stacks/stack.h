#ifndef STACK_H
#define STACK_H

#include <stdbool.h>


typedef int Item; //type specifier of stack
typedef struct stack_type *Stack;

static void terminate (const char *message);
Stack create_stack(Item size);
void destroy_stack(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);

#endif

