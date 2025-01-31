/*
 * data alignment
 * data structure
 * packing
 * padding is only inserted when structure member is followed by a member with a larger alignment requirement
 * */
#include <stdio.h>
#define PRINT_INT(x) printf(#x " \t: %p\t%d\n", &x, x)
int main()
{
	typedef struct {
		union {
			int n;
		}u;		
	}size;
	
	//data type in descending order
	union A {//sharing memory in largest  type member
		char b[4]; //4 byte
		double c; //8 bytes
		int l; //4 bytes

	};
	
	//data type in ascending order	
	struct B {
		char a; //2 bytes
		short b; //2 byte if followed by byte larger tha padding will inserted b + (b-n),  however all bytes will be required by the compiler to align it with the rest 
		int s; //4 bytes 
		
	};
	//data types in arbitrary order
	struct C { 
		char s;//1 byte
		//padding 1
		short a; //2 bytes	
		int q; //4 bytes
		double l; //8 bytes	
		
	};
	
	size Struct_size[2];

	Struct_size[0].u.n = sizeof(union A);
	Struct_size[1].u.n = sizeof(struct B);
	Struct_size[2].u.n = sizeof(struct C);

	PRINT_INT(Struct_size[0].u.n);
	PRINT_INT(Struct_size[1].u.n);
	PRINT_INT(Struct_size[2].u.n);

}
