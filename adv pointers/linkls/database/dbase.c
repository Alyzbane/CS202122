#include <stdio.h>
#include "node.h"
#include "readline.h"

int main(void)
{
	char code;

	 for(;;)
	 {
		printf("Enter operation code:  ");
		scanf(" %c", &code);
		while(getchar() != '\n') 
			;
		switch (code)
		{
			case 'i': insert();
				  break;
			case 's': search();
				  break;
			case 'u': update();
				  break;
			case 'p': print();
				  break;
			case 'q': return 0;
			default: printf("Illegal code\n");
		}		
		printf("\n");
	 }
}

