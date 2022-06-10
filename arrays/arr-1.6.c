#include <stdio.h>
/* count digits, white space, others */
int main()
{

   int c, i, nwhite, nother;
   int ndigit[10];
   nwhite = nother = 0;
   for (i = 0; i < 10; ++i)
      ndigit[i] = 0; //init all elements in 0

   while ((c = getchar()) != EOF)
   /*In ASCII, number have the value of 0x30 ('0') through 0x39 ('9')
    so we check to see if the character is in that range.*/
      if (c >= '0' && c <= '9') 
         ++ndigit[c - '0']; //eg. 5 (0x35) - 0 (0x30) = 5 (0x05)
      else if (c == ' ' || c == '\n' || c == '\t')
         ++nwhite; // incr space tab newline
      else
         ++nother; //other inputs 
         
   printf("digits =");
   for (i = 0; i < 10; ++i) //printing all the inputs
      printf(" %d", ndigit[i]);
   printf(", white space = %d, other = %d\n", nwhite, nother);
}