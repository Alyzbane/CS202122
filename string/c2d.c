#include <stdio.h>

int main()
{
   int c, lc;
   while ((c = getchar()) != EOF)
   {
      if (c == ' ')
      {
         putchar(c);
         while ((c = getchar()) == ' ')
            ;
      }
      if (c == EOF)break;
   }
   putchar(c);

   while ((c = getchar()) != EOF)
   {
      if (c == ' ')
      {
         putchar(c);
         lc = 1;
      }
      else if (c == ' ' && lc == 1)
      {
         putchar(c);
      }
      else
      {
         putchar(c);
         lc = 0;
      }
   }
   return 0;
}