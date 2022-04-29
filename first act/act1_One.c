#include <stdio.h>
//basic solving operations
void sumN ();
void prodN ();
void diffN ();
void qtN ();
void modN ();

int n1, n2;
int main()
{

   printf("Enter two number: ");
   scanf(" %d %d", &n1, &n2); 

   sumN();
   prodN ();
   diffN ();
   qtN ();
   modN ();

   return 0;
}


//Sum operation
void sumN ()
{
   printf("The sum is %d", n1 + n2);
}

//Product operation
void prodN ()
{
   printf("\nThe prodcut is %d", n1 * n2);
}

//Difference Operation
void diffN ()
{
   printf("\nThe difference is %d", n1 - n2);
}

//Quotient Operation
void qtN ()
{
   printf("\nThe quotient is %d", n1 / n2);
}

//Modulu operation
void modN ()
{
   printf("\nThe modulus is %d", n1 % n2);
}