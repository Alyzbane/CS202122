#include <stdio.h>

int main(void)
{
    //clearing the bit
    unsigned short a, s;

    //clearing the 4 bit of a
    a = 0x00ff;
    s = 0x0003;
    a &= ~0x0010; //16 hex digit into 0001 0000 binary remove the 4
                 //(0x00ff) = 1111 1111 & 
                 //(0x0010) = 1110 1111 
                 //(EF)     = 1110 1111                

    printf("Clearing 4 bit: %x\n", a);

    a = 0x00ff;
    //shif left 1 by s then complement all bits and AND the res by a
    //0001 << 0011 = ~1000  = 1111 0111 
    //1111 0111 & 1111 1111 = 1111 0111
    
    a &= ~(1 << s); //clearing bit j 
    printf("Clearing the j bit in a: %x", a);
    return 0;
}
