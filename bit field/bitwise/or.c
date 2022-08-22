#include <stdio.h>
#include <ctype.h>

#define SIZEOF(x)   printf("Sizeof " #x " : %zu\n", sizeof(x))
#define KEY '&'

int main(void)
{
    unsigned short org_ch, new_ch, size;
   
    org_ch = 0x0000;
    new_ch = 0x0000;
    org_ch |= 0x0001;

    org_ch = getchar();
    
    printf("Input & Value: %c = %d\n", org_ch, org_ch);

    new_ch |= 1 << org_ch;
    new_ch = org_ch ^ KEY;

    printf("Printing the toggle bit: ");

    printf("\nInput & value: %c = %d\n", new_ch, new_ch);


    printf("\nSizeof characters\n");
    size = sizeof(org_ch);
    
    SIZEOF(size);

    return 0;
}
