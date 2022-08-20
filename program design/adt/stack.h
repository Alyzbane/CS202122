#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef int Item; //different type specficiers

typedef struct stack_type *Stack; //stack ptr is reference to the stack_size
                          //make an incomplete struct 
                          //use it as argument for functions
                          //in source file of this header 
                          //doon kompletohen yung buong stack_size

Stack create(void); 
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
bool push(Stack s, Item i);
Item pop(Stack s);

#endif

