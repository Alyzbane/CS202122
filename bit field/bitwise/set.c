#include <stdio.h>

int main(void)
{
    //setting the bit
    unsigned short a, s;

    a = 0x0000;
    printf("Before 4 bits: a = %d\n", a);
    
    a |= 0x0010;

    printf("4 bits: a = %d\n", a);

    s = 0x0003;
    printf("\nBefore: s = %d\n", s);
    /*
     * 0001 << 0011 = 1000 (8 bits)  move 1 onto left for 3 bits 
     * 0001 0000
     *|0000 1000 = 0001 1000 = 24 
     hex = 18
     * */
    a |= 1 << s; //masking using the s 
    printf("Hex: a = %x\n", a);

    return 0;
}
