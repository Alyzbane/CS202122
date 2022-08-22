#include <string.h>
#include "word.h"
#include "line.h"

#define MAX_WORD_LEN 20

int main(void)
{
	char word[MAX_WORD_LEN+2]; //not exceeding 21
	int word_len, i;

	clear_line(); //clear the buffer
	for(;;)
	{
		word_len = read_word(word, MAX_WORD_LEN+1);
		if (word_len == 0)
		{
			flush_line(); //empty string
			return 0;
		}
		//words lagpas sa 21 ay truncated
		if (word_len > MAX_WORD_LEN)
			word[MAX_WORD_LEN] = '*';
		//print the words in line buffer
		if (word_len + 1 > space_remaining())
		{
			write_line();
			clear_line();
		}
		add_words(word);
	}
}

