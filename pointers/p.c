#include <stdio.h>
#define N 10

int main ()
{
	int arr[N], *i;
	i = &arr[2];
	
	for(int p = 0; p < N; ++p) arr[p] = p + 1;

	for(int p = 0; p < N; p++) printf("\n %d = %d", p, arr[p]);
	
	int s = *i - arr[N]; // current position of pointer

	for(int p = s; p < N; p++) printf("\n %d = %d", p, *i);
	
	printf("\n%d = %3u : %d", s, i, *i);
	static int x[N] = {0}, *z = x;
	for(int p = 0; p < N; p++) printf("\n %d = %d", p, x[p]);
	
	printf("\n%d = %3u", *z, &z);

}


