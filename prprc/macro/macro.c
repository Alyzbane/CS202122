#include <stdio.h>

// #define MACRO 100 in pre-processing is called macro expansion
// its statement is called macro definition or "macro"

/*
MACRO is macro template
100 is macro expansion
before passing the source code is passed to compiler
all macro templates in program are replaced with macro expansion
*/
#define MACRO 100 


//dont leave a blank between macro template and its argument
//or the arg will be part of macro expansion
//all macro expansion should be enclosed in parenthesis
#define AREA(x) ( 3.14 * x * x )//arguments in macro
#define ISDIGIT(y) ( y >= 48 && y <= 57 ) 


void ask (char a);

int main () 
{
	int a = 100, sum, mArg;
	char ch;

	sum = a + MACRO; //compilers can generate constants faster than variables
	printf("\nMacro: %d", sum);

	//argument in macros
	mArg = AREA(a);
	printf("\nArgument Result = %d", mArg);

	ask(ch);//condition using macro expansion

}

void ask (char a)
{
	printf("\nEnter any digit: ");
	scanf(" %c", &a);

	if (ISDIGIT(a)) //using macro condition
		printf("\nYou entered a digit");
	else
		printf("\nIllegal Input");

}
