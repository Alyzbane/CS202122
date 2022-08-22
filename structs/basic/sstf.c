#include <stdio.h>
#include <string.h>

#define LEN 20 
#define PRINT_LINE(x) printf(#x " : %s\n", x)

struct part 
{
	int num; 
	char str[LEN];
}var = {.num = 1};		

void sst (struct part content)
{
	PRINT_LINE(content.str);
	content.num = 2;
}

struct part build_part (int num, const char *name)
{
	struct part content; //temp declare a content var in part
		
	content.num = num; //assign the param num and *name in content then return it to the main caller
	strcpy(content.str, name);

	return content;
}

int main()
{ 
	
	//sst(var);

	var = build_part(1, "Hello, World");
	
	PRINT_LINE(var.str);
	
	//compound declarations
	
	//struct part voyd = (struct part) {100, "void"};
	//sst((struct part) {1 + 1, "HELLO"});

	
	return 0;
}
