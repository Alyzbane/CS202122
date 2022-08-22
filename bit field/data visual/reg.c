#include <stdio.h>
#include <stdint.h>

//depending machine types
//define a definition for portability to other machines

typedef unsigned char BYTE; 
typedef uint32_t WORD; //x86 arch support for 16-bit words

//modifying the registers together 
//with small register in it

//AX BX CX DX registers are all --> 16 bits
//it stores up the bits from lsd called (big-endian)
//reverse lsd is stored in last is called (little-endian)

    union { 
        struct {
            WORD ax, bx, cx, dx; //16 bits per 1 vars 
        }word;
        //all of these members of union laid each other in abstract
        //data of memory
        //when a data item consist more than one byte there are 
        //2 logical ways it will store the data in memory
        //the big-endian & little-endian(x86)
        struct {
            //notice that al "low" is preceeding ah "high"
            //this specific byte ordering is dependent on CPU
            //though this time assume natin na nagamit tayo ng
            //x86 bit arch which use little-endian
            BYTE al, ah, bl, bh, cl, ch, dl, dh; //8 bits = 1 byte
        }byte;
    }regs;

    

int main(void)
{
   BYTE *p;

    printf("Sizeof Union: %zu\n"
           "Sizeof Struct: %zu, bytes: %zu\n", 
           sizeof(regs), sizeof(regs.word), sizeof(regs.word) * 8);
   
    regs.byte.ah = 0x12;
    regs.byte.al = 0x34;

    //the bits of word ax are overlay on byte al & ah
    //ax = 1234 0010 1100 0100 1000
    //ah = 12   0100 1000
    //ah = 34   0010 1100
    
    printf("AX: %hx\n", regs.word.ax);
    return 0;
}

