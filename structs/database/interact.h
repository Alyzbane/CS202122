#ifndef INTERACT_H
#define INTERACT_H

//macros
#define NAME_LEN 25
#define MAX_PARTS 100

//struct
struct part {
	char name[NAME_LEN+1];
	int number;
	int on_hand;

};

extern struct part inventory[MAX_PARTS];

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

#endif
