#include<stdio.h>
int getBest (int z, int x, int c, int v);

int main(void) {
    int a, b, c, d;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    int highest = getBest(a, b, c, d);

    printf("Highest integer = %d", highest);

    return 0;
}

int getBest(int z, int x, int c, int v)
{
  //sort the formal values into an array
  int res[4] = {z, x, c ,v}, i;
  for (i = 1; i < 4; i++) //loop through the array
  {
    if(res[0] < res[i]) //loop until the last array  indices
      res[0] = res[i]; //replace the array 0 into the array i = large number
  }
  return res[0];
}