#include <stdio.h>
#define PRINT_TOKENS(x) printf(#x "\t: %d\n", x);
#define START_FUNC() printf("Using function %s\n", __func__)
#define RETURN_FUNC() printf("Exiting function %s\n", __func__)

int add (int a, void *(*f) (int))
{
    START_FUNC(); 

    PRINT_TOKENS(a);
     
    int w = 2;
    (*f)(w);

    PRINT_TOKENS(w);
    a += w;

    PRINT_TOKENS(a);

    RETURN_FUNC();
    return a;
}
void *make (int w)
{
    START_FUNC();

    printf("\n ---Before---\n");
    PRINT_TOKENS(w);
    w -= 1;
    printf("\n ---After---\n");
    PRINT_TOKENS(w);

    RETURN_FUNC();
}
int main()
{
    
   //return value int 
   //pointer to func variable(*f) 
   //(int) req argument  
    void *(*f)(int);
    
    f = make;

    int sum = add(1, f);

    printf("%d\t", sum);
}
