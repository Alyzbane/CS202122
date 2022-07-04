#include <stdio.h>
#include <string.h>


int strcomp (const char *s, const char *a);

int main()
{

	char a[] = "abc";
	char t[] = "abC";

	int res = strcomp(a, t);
	int st = strcmp(a, t);	

	printf("\tresult %3d", res);
	printf("\tresult %3d", st);


}

int strcomp (const char *s, const char *a)
{
	//compare the parameters lexicographically since its only taking the values
	while(*s && *s == *a)
	{
		*s++;
		*a++;
	}
	
	return (unsigned char)*s - (unsigned char)*a;
}
