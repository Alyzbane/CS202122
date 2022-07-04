#include <stdio.h>
#include <string.h>

//user define swap for STRINGS/char
void swap(char *lineptr[], int i, int j)
{
	char *temp;
	//temp will have the first value of v[i]
	temp = lineptr[i];
	lineptr[i] = lineptr[j];
	lineptr[j] = temp;
}
//user define quicksort for STRINGS/char
void qcsort (char *lineptr[], int left, int right)
{
	int i, last;
	
	if (left >= right) //few strings return nothing	
		return;
	//divide and conquer the strings
	swap(lineptr, left, (left / 2));
	last = left;	//new leftmost element
	
	//comparison of string characters
	for(i = left+1; i <= right; i++)
	{
		if(strcmp(lineptr[i], lineptr[left]) < 0)
			swap(lineptr, ++last, i);
	}	
	swap(lineptr, left, last);
	qcsort(lineptr, left, last-1);
	qcsort(lineptr, last+1, right);
}
