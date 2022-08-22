#include <stdio.h>
#include <stdlib.h>

	struct node {
		int val;
		struct node *next;

	};

struct node *add_node (struct node *list, int n);
struct node *del_list (struct node *list, int n);

int main()
{

	struct node *first = NULL;
	
	first = add_node(first, 2);
	first = add_node(first, 3);
	first = add_node(first, 1);
	
	first = del_list(first, 2);

    return 0;
}

struct node *add_node (struct node *list, int n)
{
	struct node *new_node;

	new_node = malloc(sizeof(struct node));
	
	if(new_node == NULL)
		exit(EXIT_FAILURE);
	new_node->val = n;
	new_node->next = list;
	return new_node;
}
struct node *del_list (struct node *list, int n)
{
	struct node *cur, *prev;

	for(cur = list, prev = NULL;
	    cur != NULL && cur->val != n;
	    prev = cur, cur = cur->next)
		;
	//conditions to see if n is found or not 
	if (cur == NULL)
		return list;
	if (prev == list)
		list = list->next; //n is in the first node
	else
		prev = cur->next; //n is found somewhere in node
	free(cur); //else condit successful
	return list;
	
}
