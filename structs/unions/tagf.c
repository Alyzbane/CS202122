#include <stdio.h>
#define INT 0
#define DOUBLE 1
#define PRINT_SIZEOF(x) printf(#x " : \t%d\n", sizeof(x))
typedef struct {
	enum {INT_KIND, DOUBLE_KIND} kind;
	union {
		double d;
		int i;
	}u;
}Num;

void print_num (Num n)
{
	if (n.kind == INT)
		printf("%d\n", n.u.i);
	else
		printf("%g\n", n.u.d);
}

int main(void)
{
	Num mix_data[10];
	
	//make it dynamic
	mix_data[0].kind = INT_KIND; //programmer resposibilty to change the INT_KIND whevenever defining a values in union member 
	//mix_data[0].u.i = 1;	

	print_num(mix_data[0]);
	PRINT_SIZEOF(mix_data);
	PRINT_SIZEOF(mix_data[0].kind);
	PRINT_SIZEOF(mix_data[0].u);
	PRINT_SIZEOF(mix_data[0].u.i);
	PRINT_SIZEOF(mix_data[0].u.d);

	return 0;
}
