#include<stdio.h>
int getHigherValue(char z, char x);

int main() {   
    char a, b;
    
    printf("Enter first character: ");
    a = getchar();
    getchar();

    printf("Enter second character: ");
    b = getchar();
    getchar();

    printf("Result value = %d", getHigherValue(a, b));

    return 0;
}

int getHigherValue(char z, char x)
{
//assign the ASCII value in result according to the loop condition
  int result;
  if (z  > x) //comapare the two ASCII value of two actual arguments
     result = z; 
  else
    result = x;

  return result;
}