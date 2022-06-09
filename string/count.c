#include <stdio.h>

int main()
{
   int t = 0, b = 0, n = 0, ch;
   while((ch = getchar()) != EOF)
   { 
      if(ch == '\n')
        n++;
      if(ch == '\t')
        t++;
      if(ch == ' ')
        b++;
   }

   printf("Newline: %d\n", n);
   printf("Tab: %d\n", t);
   printf("Blankspace: %d\n", b);
   
   return 0;
}