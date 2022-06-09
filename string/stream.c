#include <stdio.h>

int main()
{
   int c;
   // first
   c = getchar();
   while (c != EOF)
   {
      putchar(c);
      c = getchar();
   }
   // second
   while ((c = getchar()) != EOF) // get the leftmost char and compare it to EOF
      putchar(c);                 // print the value

   //!!danger code: printing only the even
   while (getchar() != EOF) //get the char & return the leftmost to be compared to EOF
      putchar(getchar()); //put the char and get the char again
   //explained that the first characters are omitted
   // the second one only get printed

}
