#include <stdio.h>

int main()
{
   int ch, c;
   /*
   while ((ch = getchar()) != EOF)
   {

      if (ch == '\b')
      {
         printf("\\b");
         continue;
      }
      if (ch == '\t')
      {
         printf("\\t");
         continue;
      }
      if (ch == '\\')
      {
         printf("\\");
         continue;
      }

      putchar(ch);
   }
   */

//dry method
   while ((c = getchar()) != EOF) {
    // Detect/translate special characters, otherwise output as is.

    switch (c) {
        case '\t': putchar ('\\'); putchar ('t');  break;
        case '\b': putchar ('\\'); putchar ('b');  break;
        case '\\': putchar ('\\'); putchar ('\\'); break;
        default:   putchar (c);
    }
}
   return 0;
}