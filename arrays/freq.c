/*
Character Frequency Histogram
*/
#include <stdio.h>
#include <ctype.h>

#define MAX 20
#define CHAR_COMPARE(c) (c >= 0x21) && (c <= 0x7E)


int main()
{
   int i, j; // loop counters
   int arr[MAX], wc, wl, c, state;

   wc = wl = 0;

   // init arr
   for (i = 0; i < MAX; i++)
      arr[i] = 0;

   while ((c = getchar()) != EOF)
   {
      if (!isspace)
      {
         ++wc; // word count
         ++wl;
      }
      else if (CHAR_COMPARE(c))
      {
         ++arr[wc];
         ++wl;
         wl = 0;
      }
   }
arr[wc] = wl;
   printf("\nHistogram\n");
   for(i = 0; i < wc; ++i)
   {
      printf("%5d: ", i);
      for(j = 1; j <= arr[i]; ++j)
         putchar('*');
      putchar('\n');
   }
}