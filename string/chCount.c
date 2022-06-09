#include <stdio.h>

int main()
{

   // int c, nc = 0;
   // while ((c = getchar()) != EOF)
   // {
   //    ++nc;
   //    printf("Character read: %02x\n", (unsigned)c);
   // }
   // printf("Number of chars: %d\n", nc);

   double nc;
   for (nc = 0; getchar() != EOF; ++nc)
      ;
   printf("%.0f\n", nc);
}