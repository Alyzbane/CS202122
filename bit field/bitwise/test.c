#include <stdio.h>

int main(void)
{
    //clearing the bit
    unsigned short a, s;

    //clearing the 4 bit of a
    a = 0x0000;
    a |=  0x0010;
    s = 0x0004;
    
    
    if(a & 0x0010)
        printf("Clearing 4 bit: %x\n", a);
    
   //testing if s bit is set in a 
    if(a & 1 << s)//see if bit of a is set to s
        printf("%x bit is set in a: %x\n ", s, a);

    return 0;
}
