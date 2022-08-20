#include <stdio.h>
#include "print.h"

void flags (void)
{
    printf("--------Flags--------\n\n");
 /*
    * - : l-justify
    * + : nums with preceeding + or -
    *
    * space : n > 0 always with space
    *         ovveride by + flag
    *
    * # : octal num with 0, nonzero hex with 0x or 0X
    *     float nums have decimal points
    *     trailing zeros keep from g or G conversion
    *
    * 0 : nums padded w/ leading zero's up to field width
    *     ignored w/ conversion d,i,o,u,x and X
    *     override by -
    * */ 
    printf("Left-Justify (-) : %-d\n", 21);

    printf("Signed Conversion (+) : %+5d\n", -1);

    printf("Space (n > 0): % 08d\n", 22);
    
    printf("Real Value (#) : %#x\n", 0x00A1);

    printf("Zero padding (0): %0f\n", 14.2315);

}

void min_fw(void)
{
    printf("\n-------Min field width-------\n\n"); 
    printf("Normal min field width : %15d\n", 231);
    //converting 15 with 10 spaces
    //        15 <-- output has 15 + N characters
    printf("Next argument field width (*) : %*d\n", 10, 15);
    printf("Normal field width : %15f\n", 12.345);
    putchar('\n');
}

void precs (void)
{
    printf("\n---------Precision-------\n\n");
    printf("Conversion of Hex : %#-.X\n", 0xFFF1);
    //truncated oppai by 2 number using *
    //op   <-- output
    printf("Conversion of second argument : %.*s\n", 2, "oppai");
    printf("String Conversion : %-9.2s", "oppai");
    printf("Using the (g) : %.4g\n", 123456.);
}

void len_mod (void)
{
    //reference look it up
    //z = size_t argument used in int format or unsigned format
    //L = long double argmunents
    printf("\n---------Length Modifier------\n\n");
    printf("Int to Char conversion (hhd) : %hhd\n", 'z');
    printf("size_t argument (zu) : %zu\n", sizeof(len_mod));
}

void func (void)
{
    void (*fl) (void) = flags;
    void (*fw) (void) = min_fw;
    void (*pr) (void) = precs;
    void (*lm) (void) = len_mod;
    void (*fc) (void) = func;

    printf("\n--------Function Sizes------\n\n");
    printf("Flags : %zu\n", sizeof(fl));
    printf("min_fw: %zu\n", sizeof(fw));
    printf("precs: %zu\n", sizeof(pr));
    printf("len_mod: %zu\n", sizeof(lm));
    printf("This function: %zu\n", sizeof(fc));

}
