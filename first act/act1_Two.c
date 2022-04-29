#include <stdio.h>
//comparing the highest number

int main()
{
   int n1, n2;

   printf("Enter two integer: ");
   scanf(" %d %d", &n1, &n2);
   
   if (n1 == n2) 
      printf("These numbers are equal");
   if (n1 > n2)
      printf("%d is larger", n1);
   else  
      printf("%d is larger", n2);

   return 0;
}