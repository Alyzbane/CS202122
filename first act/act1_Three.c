#include <stdio.h>
//basic solving numeric operations
//get the small & large num
void sumN ();
void prodN ();
void avrg ();
void sN ();
void lN ();

int n1, n2, n3;
int main()
{
   
   printf("Enter three integer: ");
   scanf(" %d %d %d", &n1, &n2, &n3);
   
   sumN ();
   prodN ();
   avrg ();
   sN ();
   lN ();

   return 0;
}

//Sum operation
void sumN ()
{
   printf("The sum is %d", n1 + n2 + n3);
}

//Average operation
void avrg ()
{
   printf("\nAverage is %d", (n1 + n2 + n3) / 3);
}

//Product operation
void prodN ()
{
   printf("\nThe prodcut is %d", n1 * n2 * n3);
}

void swap(int *a, int *b) 
{
  int t = *a;
  *a = *b;
  *b = t;
}

//Smallest Operation
void sN ()
{
   int arrN[3] = {n1, n2, n3};

   for(int i = 1; i < 3; i++)
   {
      if (arrN[0] > arrN[i])
      {
         arrN[0] = arrN[i];
      }
   }
   printf("\nSmallest is %d", arrN[0]);

}

//Largest Operation
void lN ()
{
   int arrN[3] = {n1, n2, n3};
   for(int j = 1; j < 3; j++)
   {
      if (arrN[0] < arrN[j])
      {
         arrN[0] = arrN[j];
      }
   }
   printf("\nLargest is %d", arrN[0]);
}