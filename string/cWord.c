#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
   int c, nw, nl, nc, state;

   nw = nl = nc = 0; // shorthand init (nw (nl =(nc = 0)))
   while ((c = getchar()) != EOF)
   {
      nc++; //increment count
      if (c == '\n')
         nl++; //increment newline
      if (c == ' ' || c == '\t' || c == '\n')
         state = OUT; //exit the condition
      else if (state == OUT)
      {
         state = IN;
         nw++; //increment words
      }
   }
   printf("\n%5d\tCount \n%5d\tWords \n%5d\tNewline\n", nc, nw, nl);
}

/*
Semantic definition of word, some special cases:

    link word: "cat-walk"
    small word: a, b,c
    biiiiiig words: "a fooooooooo<40MILLIONLETTERS>ooooooo a" has 3 words

boundary conditions:

    Texts with multiple spaces between words.
    Texts bigger than 2GB
    Words which contain a dash but no whitespace.
    Non-ascii words.
    Files in some different encoding (if your program supports that)
    Characters which are surrounded by whitespace but do not contain any word characters (e.g. "hello - world")
    Texts without any words
    Texts with all words on a single line

*/