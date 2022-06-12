/*
Character Frequency Histogram
*/

#include <stdio.h>
#include <ctype.h>

#define IN 1 //inside word
#define OUT 0 //outside word
#define MAXHIST 15 //max length of history
#define MAXWORD 10 //max length of word

int main ()
{
   int c, numC, i, state;
   int len, maxval, ovflow, wl[MAXWORD];

   state = OUT; //declare  to be out of word
   numC = 0; //number of character in word
   ovflow = 0; //number of words >= MAXWORD

   //init the array
   for(i = 0; i <= MAXWORD; ++i)
      wl[i] = 0;  
   
   while((c = getchar()) != EOF)
   {
      if(isspace) //the character encouter space, tabs, newlines
      {
         state = OUT; //exit the current wordlen
         if(numC > 0 && numC < MAXWORD) //numC exceed 0
            ++wl[numC];
         else
            ++ovflow;
      numC = 0; //go back to 0 bc new wor
      }
      else if(state == OUT) //new word has been encountered
      {
         state = IN;
         
      }
   }
}