#include <stdio.h>

#define R 2
#define C 3

int sumDarr(const int ar[][C], int n);

int main()
{
	
	int a[R][C] = { {10, 12, 23}, {11, 232, 55}};
	
	int x = sumDarr(a[C], C);

	return 0;
	
}

int sumDarr(const int ar[][C], int n)
{
	int *p;
	int sum = 0;

	for(p = ar; p < ar + n; p++)
		sum += *p;	
	return sum;
}
