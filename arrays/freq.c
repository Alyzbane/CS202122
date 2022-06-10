/*
Character Frequency Histogram
*/

#include <stdio.h>
#include <ctype.h>

#define IN 1
#define OUT 0
#define ASCII 100

int main()
{
   int n, i, j, state, ln;

   int arr[ASCII];

   for (i = 0; i < ASCII; ++i)
      arr[i] = 0; // fill the array

   // ask for input
   // init the size of 1 again to 0
   while ((n = getchar()) != EOF)
   {
      if (!isspace(n))
      {
         state = OUT;
      }
      else if (state == IN)
      {
      }
      else if (state == OUT)
      {
         ++arr[n];
         ln++;
         state = IN;
      }
      
   }
   // put the char
   printf("\nHistogram\n");

   for (j = 0; j <= arr[n]; ++j)
   {
      printf("*");
   }
   // increment if char is identical

   // end of the program
   return 0;
}