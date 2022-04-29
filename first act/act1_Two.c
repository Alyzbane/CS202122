#include <stdio.h>
//comparing the highest number
void bigPtr (int *z, int *x);

int main()
{
   int n1, n2;

   printf("Enter two integer: ");
   scanf(" %d %d", &n1, &n2);
   
   bigPtr(&n1, &n2);
   return 0;
}

void bigPtr (int *z, int *x)
{
   
   if (*z == *x) 
      printf("These numbers are equal");
   else if (*z > *x)
      printf("%d is larger", *z);
   else  
      printf("%d is larger", *x);
}