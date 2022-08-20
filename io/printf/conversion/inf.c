#include <stdio.h>

int main()
{
    double a, b;
    a = 1.0;
    b = 0.0;

    printf("Printing Infinity and NaN\n");

    printf("IEEE 745 : %a\n", a / b);
    printf("IEEE 745 : %g\n", a / b);
    printf("IEEE 745 : %A\n", a / b);
    printf("IEEE 745 : %G\n", a / b);
    printf("IEEE 745 : %F\n", 0.0 / 0.0);





    return 0;
}
