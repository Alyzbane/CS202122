#include <stdio.h>
#include <ctype.h> //uses 

int main ()
{
  char ch;

  printf("Enter a small letter: ");
  scanf(" %c", &ch); 

  printf("Uppercase = %c", toupper(ch)); 
  //function use (int or char) to return the ASCII equivalent of input converted into a capital letter
}