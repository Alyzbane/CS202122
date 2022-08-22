#include <stdio.h>
#include <math.h>

void tabulate (double (*f) (double), double first, 
               double last, double incr);
int main()
{
    double final, increment, initial;
    
    printf("Enter initial value: ");
    scanf("%lf", &initial);


    printf("Enter final value: ");
    scanf("%lf", &final);


    printf("Enter increment value: ");
    scanf("%lf", &increment);

    //cos, sin, tan ay nakalagay sa math.h

    printf("\n      x       cos(x)"
           "\n    ------   -------\n");
    tabulate(cos, initial, final, increment);

    printf("\n      x       sin(x)"
           "\n    ------   -------\n");
    tabulate(sin, initial, final, increment);
            //passing sin function as argument to be used in function
    printf("\n      x       tan(x)"
           "\n    ------   -------\n");
    tabulate(tan, initial, final, increment);

    return 0;
}

void tabulate (double (*f)(double), double first, 
               double last, double incr)
{
    double x;
    int i, num_intv;

    num_intv = ceil((last - first) / incr);
    for(i = 0; i <= num_intv; i++)
    {
        x = first + i * incr;
                                    //(*f)(x) calling the func
                                    //by passing the value of x
                                    //every increment
        printf("%10.5f %10.5f\n", x, (*f)(x));
    }
}
