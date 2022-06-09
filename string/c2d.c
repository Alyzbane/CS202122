#include <stdio.h>

int main()
{
   int c, lc;
   //most effecient since one var only and ask for input op
   while ((c = getchar()) != EOF)
   {
      if (c == ' ') //check for space
      {
         putchar(c); //print the space
         while ((c = getchar()) == ' ')//take input
            ; //do nothing
      }
      if (c == EOF)break; //exit
   }
   putchar(c);
   
   //effecient v2

   // while ((c = getchar()) != EOF)
   // {
   //    if (c == ' ')
   //    {
   //       putchar(c);
   //       lc = 1;
   //    }
   //    else if (c == ' ' && lc == 1)
   //    {
   //       putchar(c);
   //    }
   //    else
   //    {
   //       putchar(c);
   //       lc = 0;
   //    }
   // }
   return 0;
}