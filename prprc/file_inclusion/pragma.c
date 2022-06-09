#include <stdio.h>

void fun1();
void fun2();

/*
gcc does not support 
   #pragma startup func()
   #pragma exit func()

   so use the oop constr & destrct
*/
void __attribute__((constructor)) fun1 (void);
void __attribute__((destructor)) fun2 (void);

int main()
{
   printf("\nWelcome to the Main");
   return 0;
}
void fun1()
{
   printf("\nInside Function 1");
}
void fun2()
{
   printf("\nInside Function 2");
}