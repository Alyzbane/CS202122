#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "readline.h"

#define PRINT(x) printf(#x "\t: %d\n", x)

struct part *inventory = NULL;

struct part *find_part(int number)
{
    struct part *p;
    printf("Finding %d\n", number);
    for (p =  inventory;
         p != NULL && number > p->number;
         p = p->next)
        printf("Node->number = %d\n", p->number);
    if (p != NULL && number == p->number){
        printf("Node->number found %d\n", p->number);
        return p;   //number has been found in nodes
    }
    return NULL;    //number does not exist in nodes
}
void insert(void)
{
    struct part *cur, *prev, *new_node;

	new_node = malloc(sizeof(struct part));
	
	if(new_node == NULL)
    {
        printf("Database Full\n");
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number);
    
    for(cur = inventory, prev = NULL;
        cur != NULL && new_node->number > cur->number;
        prev = cur, cur = cur->next)
        PRINT(cur->number);
    
    if (cur != NULL && new_node->number == cur->number)
    {
        printf("Part already exist\n");
        free(new_node);
        return;
    }

    printf("Enter part name: ");
    read_line(new_node->name, NAME_LEN);
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);

    new_node->next = cur;
    
    //insert the new node in the lowest number
    if (prev == NULL)
    {
        printf("Prev == NULL\n");
        PRINT(new_node->number);
        inventory = new_node; 
    }
    //input is larger than any existing lowest number
    else
    {
        printf("prev != NULL\n");
        PRINT(new_node->number);
        prev->next = new_node;
    }
}

void search(void)
{
    int number;
    struct part *p;

    printf("Enter number: ");
    scanf("%d", &number);

    p = find_part(number);
    if (p != NULL)
    {
        printf("Part name %s\n", p->name);
        printf("Part on hand %d\n", p->on_hand);
    }
    else
        printf("Part doesn't exist in database\n");
}

void update(void)
{
    int number, change;
    struct part *p;
    
    printf("Enter number: ");
    scanf("%d", &number);

    p = find_part(number);
    if (p != NULL)
    {
        printf("Enter change quantity on hand\n");
        scanf("%d", &change);
        p->on_hand += change;
    }
    else
        printf("Part not found\n");
}

void print(void)
{
    struct part *p;
    printf("Part Number     Part Name                           "
            "Quantity on Hand\n");
    for(p = inventory; p != NULL; p = p->next)
        printf("%7d          %-25s%11d\n", p->number, p->name, p->on_hand);
}
