#include <stdio.h>

typedef unsigned int type; 
int main() {
    struct word{
    type a: 4;        
    //unamed bit field with 0 will skip bits in mask 
    //and let the following bitfield
    //to start over new unit
    type : 0; //pack in a WORD_MASK or BYTE_MASK 16  bits
    type d: 8;
    };
     printf("\tStruct bytes: %zu, Bits: %zu\n", 
     sizeof(struct word), sizeof(struct word) * 4);

    
}
