#include <stdio.h>

int main()
{
	int *t, *a, q[] = {1, 2 ,3 ,4};

	t = q;
	a = (t + 1);


	printf("t : %d\na : %d", *t, *a);

	*t++; //increment the pos int an array eg arr[n++]Î
	(*t)++; //increment the value of what is it pointing to
	++*a; //increment what it points to eg ++2 = 3

	p = q;
        *p++;
	(*p)++;
	*(p)++;
	++*p;
	*++p;
	*(++p);
	++*(p);
	++(*p);
	int a = p - q;
	printf("\nt : %d\na : %d", *t, *a);

	return 0;
}
