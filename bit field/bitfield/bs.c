#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //using int is ambigious
    //declare all bit-fields to be either
    //usigned int or signed int
    struct file_date {
    unsigned char day : 5, a: 6, year : 5; 
    //bit-fields has no address
   };
    struct file_date kino;
    unsigned int bit, n = 0;


    kino.day = 10;
    if ((kino.day >> 0x0001) & 1)  
        printf("Happy\n");

    
//    kino.month = 10;
    kino.year = 1;

    printf("Year %d\n", kino.year);

 //   if (kino.month & 0x0004)
    printf("\tStruct bytes: %zu, Bits: %zu\n", 
            sizeof(struct file_date), sizeof(struct file_date) * 3);

    bit = 20; //set  0x14 = 0001 0100  
    bit |= 0xF; //set bit into 1111 
    bit = (bit >> n) & 0x1F; 

    printf("bit: %d\n", bit);
    if (bit & 0x14)
        printf("True\n");
    
    return 0;
}
