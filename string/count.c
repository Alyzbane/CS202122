#include <stdio.h>

int main()
{
   long t, b, n, ch;
   while((ch = getchar()) != EOF)
   { 
      if(ch == '\n')
        n++;
      if(ch == '\t')
        t++;
      if(ch == ' ')
        b++;
   }

   printf("Newline: %ld\n", n);
   printf("Tab: %ld\n", t);
   printf("Blankspace: %ld\n", b);
   
   return 0;
}