#include <stdio.h>
#include <string.h>
#include "line.h"

#define STRINGIZE(x) STRINGIZE2(x)
#define STRINGIZE2(x) #x

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
	line[0] = '\0';
	line_len = 0;
	num_words = 0;
}

void add_words(const char *word)
{
	if(num_words > 0)
	{
		line[line_len] = ' ';
		line[line_len+1] = '\0';
		line_len++;
	}
	strcat(line, word); //concatenate the words into line
	line_len += strlen(word); //current len of characters in line
	num_words++; //words in the current line	
}

//track the remaining length max line
int space_remaining(void)
{
	return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
	int extra_spaces, insert_space, i, j;
	
	//diff of max line and char in current line will be use either 1 or 2
	extra_spaces = MAX_LINE_LEN - line_len;
	for(i = 0; i < line_len; i++)
	{
		if(line[i] != ' ')
			putchar(line[i]);
		else
		{
			//count the spaces to be added	
			insert_space = extra_spaces / (num_words - 1);
			for(j = 1; j <= insert_space + 1; j++)
				putchar(' ');
			extra_spaces -= insert_space;
			num_words--;
		}
	}
	putchar('\n');
}

//print the line
void flush_line (void)
{
	if (line_len > 0)
		puts(line);
}
