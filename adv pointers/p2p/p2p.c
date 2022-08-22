#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};

struct node *first = NULL;

void add_node (struct node **pp, int n) //pp = first is alias pointing to the argument
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        exit(0);

    new_node->val = n; // put the value
    new_node->next = *pp; //using the paramater to point next to 
            //its currently pointing at (1)NULL (2) its recent node

    *pp = new_node; // the actual argument passed will point to the node created in local func  
}

int main()
{
    add_node(&first, 2);    //address of pointer first as argument
    add_node(&first, 1);    

    printf("%d\t%d", first->val, first->next->val);
    return 0;
}
