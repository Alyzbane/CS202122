#include <stdio.h>

#define PRINT_INT(x) printf(#x " : %d\n", x)
int main()
{
	enum Bool {TRUE, FALSE};
	typedef enum {RED, BLUE, BLACK} panty;

	panty girl;
	girl = RED; //girl has now 0 red panty
	PRINT_INT(girl++); //girl is now wearing 1 BLUE panty

	enum sizes {AA = 10, A = 13, B = 15, C, D = 19} oppai; 		//C oppai size is uninit, yet has value of 16
	//yung constant na may value na init tas
	//ang sunod ay unit magkakameron yun ng value > galing sa prev constant
	//{a = 1, b}	b = 2
	
	oppai = B;
	oppai = 0; //!!careful using integer constant in enum since we're not sure kung meron bang n enumerated na declared

	PRINT_INT(oppai);	
    PRINT_INT(FALSE);
	PRINT_INT(sizeof(oppai) / sizeof(oppai - 4));
	return 0;
	
}
