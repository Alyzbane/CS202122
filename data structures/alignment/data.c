#include <stdio.h>

#define PRINT_INT(x) printf(#x " \t: %p\t%d\n", &x, x)

int main()
{
	typedef	struct {
		union {
		int a;	
		}u;
	}em;

	struct A {
		double a; //8 bytes
		union B {  //8 kasi double > than all members
			//nakikihati nalng yung ibang members
			char v[4]; //4 bytes 8
			double c; //8 bytes
			int  d; //4 bytes 8
		};
		char r[4]; //4 + (8 - 4) =  8
	}; //24 bytes
	
	em size[1];
	
	size[0].u.a = sizeof(struct A);
	size[1].u.a = sizeof(union B);
	
	//Struct 
	PRINT_INT(size[0].u.a);	
	
	//Union
	PRINT_INT(size[1].u.a);

	return 0;

}
