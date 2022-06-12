/*
Character Frequency Histogram
*/

#include <stdio.h>
#include <ctype.h>

#define IN 1       // inside word
#define OUT 0      // outside word
#define MAXHIST 15 // max length of history
#define MAXWORD 11 // max length of word

int main()
{
   int c, numC, i, state;
   int len, maxval, ovflow, wl[MAXWORD];

   state = OUT; // declare  to be out of word
   numC = 0;    // number of character in word
   ovflow = 0;  // number of words >= MAXWORD

   // init the array
   for (i = 0; i <= MAXWORD; ++i)
      wl[i] = 0;

   while ((c = getchar()) != EOF)
   {
      if (isspace) // the character encouter space, tabs, newlines
      {
         state = OUT;                    // exit the current wordlen
         if (numC > 0)
            if(numC < MAXWORD) // numC exceed 0
               ++wl[numC];
            else
               ++ovflow;
         numC = 0; // go back to 0 bc word len has ended
      }
      else if (state == OUT) // new word has been encountered
      {
         state = IN;
         numC = 1; // beggining of new word
      }
      else
         ++numC; // counter for inside a current word
   }

   // determine the max word length
   maxval = 0;
   for (i = 1; i < MAXWORD; ++i)
      if (wl[i] > maxval)
         maxval = wl[i];
   
   putchar('\n');
   //
   for (i = 1; i < MAXWORD; ++i)
   {
      printf("%5d || %5d: ", i, wl[i]);
      if (wl[i] > 0)
      {
         if ((len = wl[i] * MAXHIST / maxval )<= 0)
            len = 1;
         else
            len = 0;
      }
      while (len > 0)
      {
         putchar('*');
         --len;
      }
      putchar('\n');
   }
   if(ovflow > 0)
      printf("There are %d words >= %d\n", ovflow, MAXWORD);
}