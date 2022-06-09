#include <stdio.h>
//compile the code with "-Wno-unknown-programs"
void fun1();
int fun2();
int fun3();
#pragma GCC diagnostic ignored "-Wunknown-pragmas" //disabling pragma warnings
#pragma warning –rch //suppress warning of unreachable code
#pragma warning -par //suppress warning of parameter unused
#pragma warning -rvl //suppres warning does not return a value

int main()
{
   fun1();
   fun2(6);
   fun3();
}
void fun1()
{
   printf("\nHEllo fun1");
}
int fun2()
{
   int x = 10;
   return x;
   x++;
}
int fun3()
{
   int x = 100;
}
