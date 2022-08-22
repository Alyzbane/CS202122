#include <stdio.h>

void cat (char *bstr, const char *astr);

#define LEN 10 //length for array

#define STRINGIZE(x) #x
#define PRINT_STRING(s) printf(#s " : %s\n", s)
#define PRINT_INT(i) printf(#i " : %d\n", i)
//structures	
	struct	 
	{
		//members
		int number;
		char name[LEN];
		int using;		
	} part1 = {.number = 1, "One", .using = 1}, //One is assumed to be char type after the .number designator (array have one too but diff)
	 part2;	
int main (int argc, char *argv[])
{
	//accessing the member of struct using period . 
	//var_name.member_name
	PRINT_STRING(part1.name);	

	//its precedence takes over & and same as ++ at prefix
	scanf("%s", (part2.name + 0));	

	
	cat(part1.name, part2.name);
	PRINT_STRING(part1.name);
	return 0;
}

void cat (char *bstr, const char *astr)
{
	while((*bstr++ = *astr++))
		;
}
