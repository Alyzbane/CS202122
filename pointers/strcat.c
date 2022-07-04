#include <stdio.h>

void strcatt (char *s, char *t);

int main()
{
	char a[20] = "abc";
	char b[] = "Def";

	strcatt(a, b);
	printf("%s\n%s", a, b);
}

void strcatt (char *s, char *t)
{
	int i = 0;
	while(*s++ != '\0')
		;
	*--s; /*			          	  
		 decrease the pos of pointer 
	       */
	while(*s++ = *t++)
		;
}
