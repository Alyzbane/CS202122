#include<stdio.h>

void generatePattern (int pattern);

int main(void) {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    generatePattern(n);

    return 0;
}

void generatePattern (int pattern)
{
  auto int i, j; //using auto from strg class the execution time will be much faster
  for(i = 1; i <= pattern; i++) //check the value of i when its <= to pattern
  {
    for(j = 1; j <= i; j++)//once the j is > to i goto line 25, once they're equal goto line 23
    {
      printf("T"); //print a character equivalent to the value of j
    }
    printf("\n"); //print newline once the second for loop breaks out
  }
}