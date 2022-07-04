#include <stdio.h>
#include <string.h>

int strlean (char *);
char getline (char *);
void printLine (char *arr, int len);


int main()
{

		int i;
		char ar[10], *tr = ar;
		
		getline(ar);

		i = strlean(ar + 1); //count starts at index 2
//similar to python arr[::Î] probably
		printLine(tr, i); //print starts at index 1

		printf("\nStr: %d", i);
}


//strleng counter
int strlean (char *arr) 
{
	int i;
	for(i = 0; *arr++ != '\0';)
		i++;

	return i;
}

void printLine (char *arr, int len)
{
	
	for(int p = 0; p < len; p++)
		printf("\n %d = %c", p, arr[p]);
}

char getline (char *ar)
{
	int i, c;

		for(i = 0; i < 10 && (c = getchar()) != EOF && c != '\n'; ++i)
			ar[i] = c;
		if (c == '\n')
		{
			ar[i] = c;
			++i;
		}	
		ar[i] = '\0';
		return i;
}
