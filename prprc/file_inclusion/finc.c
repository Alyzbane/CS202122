#include <stdio.h>
#include <string.h>

//directory file inclusion using <filename.c>
#include <c/header.h>

//Header File inclusion using "filename.c"
#include "header.c"

int main()
{

    printf("Header file: %d", a);
    printf("\nString in header file: %s", st);
    
    strcat(st, s);

   printf("\nCharacter in directory header file: %s", st);
   return 0;
}