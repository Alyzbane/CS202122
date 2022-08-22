#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "alloc.h" //alloc and afree from k&r
#include "qcsort.h"

#define MAXLINES 1000 //max lines to be sorted
#define MAXLEN 1000 //max length of any input line

char *lineptr[MAXLINES];
int getline(char *, int);
int readlines (char *lineptr[], int nlines);
void writelines (char *lineptr[], int nlines);
char *alloc(int);

int main()
{
	int nlines;
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{	
		qcsort(lineptr, 0, nlines-1); //sort the read array 
		writelines(lineptr, nlines); //print the read characters
		return 0;
	}	
	else
	{
		printf("ERROR TOO MUCH INPUT TO SORT\n");
		return 1;
	}
}
//reading the lines if it can still allocated through specific length
int readlines (char *lineptr[], int nlines)
{
	int len, nline;
	char *p, line[MAXLEN];
	nline = 0;
	while(len = getline(line, MAXLEN) > 0)
	{
		if(nline >= MAXLINES || (p = alloc(len)) == NULL)
			return -1;
		else
		{
			line[len-1] = '\0';
			strcpy(p, line); //copy the cahracters returned
			lineptr[nline++] = p; //pass it into extern *lineptr
		}
	}	
	return nline;
}

// getting the character lines length 
int getline (char *rLine, int lim)
{
	int c;
	char *t = rLine;
	/*for(i = 0; i < MAXLEN-1 && (c = getchar()) != '\n' && c != EOF; ++i)
		rLine[i] = c; //assign the char in array
	if (c == '\n')	 //add the newline & the string terminator
	{
		rLine[i] = c;
		++i;
	}*/
	while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
		*rLine++ = c;
	if (c == '\n')
		*rLine++ = c;

	*rLine = '\0';
	return rLine-t;
}

//printing the lines
void writelines (char *lineptr[], int nlines)
{
	while(nline-- > 0)
		printf("%s\n", *lineptr++);
}
