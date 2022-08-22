//returning the matching and non-matching command line argument string 
#include <stdio.h>
#include <string.h>

#define MAXL 1000

int getLine (char s[], int lim);

int main(int argc, char *argv[])
{
	int c, except = 0, number = 0, found = 0;
	char line[MAXL]; //line by line inputs
	
	long lineno = 0; //count the line number

	while (--argc > 0 && (*++argv)[0] == '-') 
	while(c = *++argv[0]) //assign the first char and compare it to '\0' while((c = *++argv[0]) != '\0) go to the next block [1] see if the 1st char of the string has -
			switch(c)
			{
				case 'x':
					except = 0; //give the lines of matching lines
					break;
				case 'n':
					number = 1; //give the number lines of non matching lines
					except = 1;
					break;
				default:
					printf("Illegal options %c\n", c);
					argc = 0;
					found = -1;
					break;
			}
	if (argc != 1)
		printf("Usage: find -x -n pattern");	
	else
	{
		while(getLine(line, MAXL) > 0 )
		{
			//int matched = (strstr(line, *argv) != NULL);
			//if (matched && !except || !matched && except)
			//if (xcept ? !matched : matched)
			lineno++;
			if((strstr(line, *argv) != NULL) != except) //1 strstr and 1 except will print the non matching lines 1 strstr and 0 except will print the matching lines
			{
				if(number) //will print only if requested by -n
					printf("%ld: ", lineno);
				printf("%s", line);
				found++;
			}
		}
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
