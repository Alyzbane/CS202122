#include <stdio.h>

#define XSTR(s) STR(s)
#define STR(s) #s
#define PSTR(s) printf("\n"XSTR(s)"\n");
#define RESULT(x) printf(STR(x)" = %d\n", x);

#define PRINT(z,x,c) printf("%d " \
                          STR(x) " %d\n", z, c)
int main(void)
{
    size_t a, s, result;
    a = 5; //0101
    s = 2; //0010

    PSTR(LEFT SHIFT OPERATOR);
    PRINT(a,<<,s);
    //each bit shifted off on the left end of a = 5 
    //a zero bit enters the right
    //translation: shift 5 bits onto left for 2 times
    result = a << s; //0010 1000 = 40
    RESULT(result);

    PSTR(RIGHT SHIFT OPERATOR);
    PRINT(a,>>,s);
    //0101
    //0010
    //000>>1 01
    result = a >> s; //0001 = 1
    RESULT(result);

    PSTR(COMPLEMENT OPERATOR);
    PRINT(0,~,s);
    result = ~s; //1101 = 13
    RESULT(result);

    PSTR(AND OPERATOR);
    PRINT(a,&,s);
    result = a & s; //0000 = 0
    RESULT(result);

    PSTR(EXCLUSIVE XOR OPERATOR);
    PRINT(a,^,s);
    result = a ^ s; //0111 = 7
    RESULT(result);

    PSTR(INCLUSIVE OR OPERATOR);
    PRINT(a,|,s);
    result = a | s; //0111 = 7
    RESULT(result);

    return 0;
}
