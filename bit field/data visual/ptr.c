#include <stdio.h>
#include <ctype.h>

typedef unsigned char BYTE;

int main(void) 
{
    unsigned int addr;
    int i, n;
    BYTE *ptr;

    printf("Address of main function: %x\n", &main); 
    printf("Address of addr variable: %x\n", &addr);

    printf("\nEnter a (hex) address: ");
    scanf("%X", &addr);
     printf("\nEnter number of bytes to view: ");
    scanf("%X", &n);
    
    printf("\n");
    printf(" Address                Bytes              Characters\n");
    printf(" -------   ------------------------------  ----------\n");
    
    ptr = (BYTE *) &addr; //cast to pointer to get the address
    for(; n > 0; n -= 10) /*print the bytes in group of 10
                            except for the last group which is less than                            10 bytes*/
    {
        printf("%8X    ", (unsigned int) *ptr); //print the address
        for(i = 0; i < 10 && i < n; i++)
            printf("%.2X ", *(ptr + i)); //print the bytes 
        for(; i < 10; i++)
            printf("    ");
        printf(" ");
        for(i = 0; i < 10 && i < n; i++) 
        {
         BYTE ch =  *(ptr + i);
         if (!isprint(ch))
             ch = '.';
         printf("%c", ch);
        }
        printf("\n");
        ptr += 10;
    }
    return 0;
}
