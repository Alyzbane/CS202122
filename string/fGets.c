#include <stdio.h>
#include <string.h>

#define SIZE 256 //maximum ascii values of characters

int main()
{
   char ch[SIZE], finalCh[SIZE];
   
   fgets(ch, sizeof ch, stdin); // ask the user of string with default size
   strncpy(finalCh, ch, sizeof ch); //copy the string into new variable
   int len = strlen(finalCh); // get the len of new variable string

   //256 size by default calling the first input string
   printf("Size of text is %d and the string is %s", sizeof ch, ch);

   //asd = 3 size of string after copying the input string into new variable
   printf("Size of text is %d and the string is %s", sizeof len, finalCh);
}