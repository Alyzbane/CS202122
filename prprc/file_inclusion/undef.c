#include <stdio.h>
 
//define the macro name so a compiling condit will work
#define TAO 


int main()
{
   //undefined will remove the macro name from system existence 
   //similar to logical operator NOT (!) reverse the expression value
   #undef TAO 
   #ifndef TAO //if not defined
      for(int i = 1; i <= 10; i++)
         printf("ERROR :(\n");
   #endif

   #ifdef TAO //if defined and true
      printf("Isa kang Tao!!");
   #else
      printf("\nnatatae ako hahaha");
   #endif

   return 0;
}