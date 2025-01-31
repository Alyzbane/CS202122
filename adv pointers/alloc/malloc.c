#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PRINT(S)	printf("%d\n", sizeof(s));

#define N 20 
char *concat (const char *s1, const char *s2);


int main()
{
	//malloc - allocate but will not init the memory
	//calloc - allocate but clear the block
	//realloc - resizes prev alloc block of memory
	
	/*programmer responsibility to test if the allocated size returns to NULL pointer and take action to resolve it
	 */ int *i;
	if((i = malloc(99))== NULL)
		printf("ERROR int alloc\n");
	else
		printf("INT %p\t : \t %d\t%d\n", &i, sizeof(i), i);
		

	char *s;
	
	s = malloc(N + sizeof(char)); //value of char * (1 byte = 8 bits)

	strcpy(s, "Oppaidaisuki desu");

	printf("char %p\t : \t %d\t%s\n", &s, sizeof(s), s);
   
	//use free to reduce the use of memory
	char *a = concat("asd", "fgh");

	return 0;
}

char *concat (const char *s1, const char *s2)
{
	char *result;

	result = malloc(N + 1) + strlen((s2) + 1); //dynamically allocated strings
	if(result == NULL)
	{
	  printf("Error: malloc failed in concat\n");
	  exit(EXIT_FAILURE);
	}
	strcpy (result, s1);
	strcat (result, s2);
	return result;
}

