#include <stdio.h>

int main()
{
    //modifying a desired bit field

    unsigned int a, s, ret;

    a = 0x0000;
    
   // a = a & ~0x0070 | 0x0050;

    s = 0x000F;
//    a |= 1 << 0x0005;    
    printf("Value %x\n", a);
//idiom
//the 0x0070 can be changed to satisft the bit s
    a = (a & ~0x0070) | (s << 4);
//    a = a & ~0x0070 | 0x0050;
    printf("Value %x\n", a);
   
    //shift the 4 - 6 bits onto right to get the value
    ret = (a >> 4) & 0x00007;

//    ret = a & 0x0007;

    printf("Value %x\n", ret);

}
