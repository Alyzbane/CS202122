#include <stdio.h>

#define ALLOCSIZE 1000 //size of available space
char *alloc (int );
void afree (char *);
int strelen (char *s);
static char allocbuf[ALLOCSIZE]; //storage for alloc
static char *allocp = allocbuf; //next free position
int main()
{
	int c;
	char a = 'a'; 

	afree(&a);
	alloc(a);
	printf("A %c : %u", a, &a);
	printf("\nALLOCp %d : %u", *allocp, &allocp); 
	printf("\nALLOCbuf %d : %u", allocbuf[0], &allocbuf); 
	printf("\nALLOCsize %d : %u", ALLOCSIZE, ALLOCSIZE); 

	c = strelen(&a);	
	printf("\nLength %d : %u", c, &c);
	printf("\nALLOCbuf %d : %u", allocbuf[0], &allocbuf); 
	printf("\nALLOCsize %d : %u", ALLOCSIZE, ALLOCSIZE); 


}

int strelen (char *s)
{
	char *p = s;
		while (*p != '\0')
			p++;
	return p - s;
}

char *alloc (int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n) //the alloc had still more space
	{

		allocp += n;
		return allocp - n;
	}
	else return 0; //not enough space
}

void afree (char *p) //free storage pointed to p
{
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
		allocp = p;
}

