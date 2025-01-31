#include <stdio.h>
#include <stdlib.h>
#include "interact.h"
#include "readline.h"
#include "compare.h"

struct part inventory[MAX_PARTS]; //declaring the inventory insource file
int num_parts = 0;

/*find_part: 	looks up a part number in inventory array.*/
int find_part(int number)
{
 	int i;
	for (i = 0; i < number; i++)
		if(inventory[i].number == number)
			return i;	
	return -1;
}

/*insert: prompt the user for new data to be inserted and print error if it already exist in database*/
void insert (void)
{
	int part_number;
	if(num_parts == MAX_PARTS)
	{
	 printf("Database is full; can't add more parts\n");
         return;
	}
	printf("Enter part number: ");
	scanf("%d", &part_number);
	if(find_part(part_number) >= 0)
	{
		printf("Part already exist.\n");
		return;
	}
	inventory[num_parts].number = part_number; //access the index of empty struct
	printf("Enter part name: ");
	read_line(inventory[num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[num_parts].on_hand);	
	num_parts++;
    //sorting numbers
    qsort(inventory, num_parts, sizeof(struct part), compare_parts_number);
    //sorting names
    //qsort(inventory, num_parts, sizeof(struct part), compare_parts_name);
}
/*search: prompt the user to enter a part number 
 * then return if its on database 
 * otherwise print an error message*/
void search (void)
{
	int i, number;
	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0)
	{
	 printf("Part name: %s\n", inventory[i].name);
	 printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}
	else printf("Part not found\n");
}

//update:	update the on_hand parts in database
//		through looking into its index
void update (void)
{
	short int i, number, change;
	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0)
	{
	 printf("Enter change in quantity on hand: ");
	 scanf("%d", &change);
	 inventory[i].on_hand += change;
	}
	else printf("Part not found.\n");
}

//print:	print all the parts stored into database
//		part name, number and on hand
void print(void)
{
	int i;
	printf("Part Number\tPart Name\t\tOn_Hand\n");
	for(i = 0; i < num_parts; i++)
		printf("%7d\t	%-25s%4d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
}
