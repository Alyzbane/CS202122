#include <stdio.h>
 
//define the macro name so a compiling condit will work
#define HYBRID 1
#define ALIEN 2
#define TAO 2


int main()
{
   #ifndef TAO //if not defined
      printf("ERROR :(");
   #endif
   #if TAO == HYBRID //if defined and true
      printf("Isa kang Tao!!");
   #elif TAO == ALIEN
      printf("TAO KA NGA!!");
   #else //else all condit failed compile this
      for(int i = 0; i <= 10; i++)
         printf("\n🧐 $%d = %d", i*1, i);
   #endif

   return 0;
}
