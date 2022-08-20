#include <stdio.h>
#include "stack.h"

void count_arg(int argc, char **argv)
{
	char **i;
	for(i = &argv[1]; *i != NULL; i++)
		printf("%s\n", *i);	
}
