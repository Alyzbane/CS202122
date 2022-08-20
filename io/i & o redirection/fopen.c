#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *st = malloc(20 + 1);

    printf("Fopen input: Hello, World!\n");    
    
    printf("Use < to represent stdin stream as file\n"); 
    printf("Input Redirection: filename <file.x\n");    
    
    printf("Use > to represent the data in stdin into stdout file\n"); 
    printf("Output Redirection: filename >file.x\n");    

    scanf("%s", st);    
    printf("%s\n", st);

    return 0;
}
