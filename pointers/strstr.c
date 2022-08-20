#include <stdio.h>
#include <string.h>


int main (int argc, char *argv[])
{
	
	char *str1 = "nothing"; 
	char *str2 = "world";
	char *result;

	//null = str1 is empty 
	//null = str2 does not appear in str1
	result = strstr(str1, str2);

	//Pointer to the 'world' from str2
	printf("%s", result);

}
