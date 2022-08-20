#include <stdio.h>

int main()
{
    int *ptr = 0x0000;
    int len;

    //printing the width field
    printf("%6.4d\n", 12);
    printf("%0*.4d\n", 6, 12);

    //printing the pointer
    printf("%+0p\n", (void *) ptr);
    
    //print the characters by printf
    printf("Using the n: %d%n\n", 123, &len);
    printf("Number of printed chars: %d\n", len);
}
