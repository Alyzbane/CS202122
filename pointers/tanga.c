#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINES 5000 /* max #lines to be sorted */
#define MAXLEN 1000

char *lineptr[MAXLINES]; /* pointers to text lines */
int readlines(char *lineptr[], int nlines);
int getline(char *, int);
void writelines(char *lineptr[], int nlines);

int main()
{
    int nlines; /* number of input lines read */
    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}

/* readlines: read input lines */
int readlines(char *lineptr[], int maxlines)
{
    int len, nlines;
    char *p, line[MAXLEN];
    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
    if (nlines >= maxlines)
    return -1;
    else {
	p = (char*)malloc(sizeof(char)* MAXLEN);
        strcpy(p, line);
        lineptr[nlines++] = p;
    }
    return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
    int i;
    for (i = 0; i < nlines; i++)
	    printf("%s\n", lineptr[i]);
}

int getline(char s[],int lim)
{
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!= '\n' || c!= EOF; ++i)
    s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
