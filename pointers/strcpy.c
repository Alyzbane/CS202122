#include <stdio.h>
#include <string.h>

void strcopy (char *s, char *t);

int main()
{
	char s[] = "asd";
	char a[] = "qweipod"; 
	char *c = "is constant"; /*
				     string pointers is constants characters
				     the content cannot be modified 
				     will only results in undefined behaviour
				  */ 
	strcopy(s, a);
	printf("\n%s\n%s", s, a);
}
void strcopy (char *s, char *t)
{
	while(*s++ = *t++)
		;
	/*
	  similar to this
	 while (the *t is not equal to 0) 
	 in pointer of s add the character pointed at t
	 increment both s & t para umusad
	
	 pagkatapos add ulit yung pointer ng t doon sa s para idagdag yung string terminator

	 while (*t)
	 {
	  *t = *s;
	  *t++;
	  *s++;
	  }
	  *t = *s;
	*/
}
