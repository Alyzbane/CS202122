#include <stdio.h>
#include <string.h>

void countCheck (char *arr, int sz);

#define SIZE 100
int main()
{
   int src, dest;
   char chOne[SIZE], chTwo[SIZE], pat[SIZE];

   printf("Enter the size of char: ");
   scanf(" %s", &chOne);

   printf("Potangina: ");
   scanf(" %s", &chTwo);

   printf("Pattern: ");
   scanf(" %s", &pat);
   //get the size of strings
   src = strlen(chOne) + strlen(chTwo);

   
   printf("%d", src); //fixed size of two inputs

   strncat(chOne, chTwo, src); //first concat

   printf("\n%d", strlen(chOne)); //size of new concatenation

   
}

void countCheck (char *arr, int sz)
{
   for(int i = 0; i < sz; i++)
      printf("arr %d is %c\n", i + 1, arr[i]);
} 