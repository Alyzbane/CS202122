#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRINT_BLOCK(x) printf(#x"\t: %p\n", &x)

int main()
{
    //restricted pointer makes a pointer to object that 
    //will be only available to be access by this restricted
    //pointer
    
    /*
    restricted pointer variable have file scope until the end
    of execution
    */
    int *restrict p;
    int *restrict alias; //accessing a restricted pointer with another
                        //is called aliasang
    p = malloc(sizeof(int));
    PRINT_BLOCK(p);
    
    alias = p; //legal assigning the block of memory into alias
    PRINT_BLOCK(alias);
    *alias = 0; //illegal only if p block of memory 
                //can only be accessed in function where p is local
                //or if its not declared with extern trying to access
                //it somewhere in its block
    printf("Alias: %d\np: %d\n", *alias, *p);
    
    char *restrict s = "asd";
    char *restrict s_alias;
   
    s_alias = malloc(strlen(s) + 1);

    memcpy(s_alias, s, strlen(s)+1);


    PRINT_BLOCK(s);
    PRINT_BLOCK(s_alias);

    printf("Alias: %s\np: %s\n", *s_alias, *s);

}
