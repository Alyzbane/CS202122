#include "interact.h"
#include <string.h>

//comparing the numbers of parts
//if p < q = -1
//p == q = 0 
//p > q = 1
int compare_parts_number(const void *p, const void *q)
{
    /*ver 1. general conditions & return statements
      we can assign the void struct into another struct to access the memebers 
      const struct part *p1 = p 
      do some if conditions
    */

    /* ver 2. type casting expressions and conditions
      we can cast the type of struct of p & q
      if (((struct part*)p)->number) < (((struct part *) q)->number)
      return -1;
      else if (((struct part*)p)->number) == (((struct part *) q)->number)
        return 0;
      else
        return 1;

      translation: casting p to the pointer of struct part 
      */
    /* ver 3. casting expressions and subtracting the two parameter
        eg. p = 1, q = 20;
        p - q = return -1< //subtracting q(big) to p(small)
        p - q = return 0
        p - q = return >1  //subtracting p(big) to q(small)
     
     * */
    return ((struct part *) p)->number - 
            ((struct part *) q)->number;
}

//same logic as compare_parts_number
int compare_parts_name(const void *p, const void *q)
{
    return strcmp(((struct part *) p)->name, 
                  ((struct part *) q)->name);
}

