#include <stdio.h>
#include "word.h"

int read_char(void)
{
 	int ch = getchar();

	return (ch == '\n' || ch == '\t') ? ' ' : ch; //return space
	
}

int read_word(char *word, int len)
{
	int ch, pos = 0;
	
	while ((ch = read_char()) == ' ') //skips over spaces 
		;
	while (ch != ' ' && ch != EOF) //encountering space will end the word
	{
		if(pos < len)
			word[pos++] = ch; //beyond the len will not be stored
		ch = read_char(); //continue reading until EOF or space
	}	
	word[pos] = '\0'; //end the word into string terminator
	return pos;
}
