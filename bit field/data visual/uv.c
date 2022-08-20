#include <stdio.h>

//depending machine types
//define a definition for portability to other machines

typedef unsigned char BYTE; 
typedef unsigned short WORD; //x86 arch support for 16-bit words

    struct file {
        WORD m: 5;
        WORD d: 4;
        WORD yr: 7;
    };

    union date {
        WORD i;
        struct file fd;
    };

    
void print_u (WORD n);

int main(void)
{
    
    printf("Sizeof Union: %zu\n"
           "Sizeof Struct: %zu", 
           sizeof(union date), sizeof(struct file));

    print_u(2001);

    return 0;
}

void print_u (WORD n)
{
    union date u;

    u.i = n; //put the value of n in the whole union

    printf("%d/%d/%d\n", u.fd.m, u.fd.d, u.fd.yr + 1980);
}
