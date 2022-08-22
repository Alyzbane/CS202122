#include <stdio.h>

#define C 4
#define R 2

void print (int size, int *p);


int main (int argc, char *argv[])
{
	int i = 1;
	int *ptr[C]; //array of pointers
        int (*p)[C]; //pointer to array
	int *pr;
	int arr[R][C] = {
			{12, 23, 4, 00},
			{21, 43, 1, 10}
			};	
	
	//row	
	for(pr = arr[i]; pr < arr[i] + C; pr++)
		*pr = 1;

	//col
	for(p = arr; p < arr + R; p++)
		(*p)[i] = 0;
	
	printf("ROW:\n");
	void print (R * C, arr[C])

}
