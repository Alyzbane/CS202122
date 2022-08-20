//returning the matching command line argument string 
#include <stdio.h>
#include <string.h>
#define MAXL 1000
int getLine (char s[], int lim);

int main(int argc, char *argv[])
{
	int found = 0;
	char line[MAXL];

	if (argc != 2)
		printf("Usage : find pattern");
	else
		while(getLine(line, MAXL) > 0)
			if(strstr(line, argv[1]) != NULL)
			{
				printf("%s", line);
				found++;
			}	
	return found;
}	

int getLine (char s[], int lim)
{
	int c, i;

	i = 0;
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0'; 
	return i;	
}
