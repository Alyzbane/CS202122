#include <stdio.h>

int main(int argc, char *argv[])
{
	//echo command line
	int i;
	//argv[0] = argv --> then its command line eg. hello, world
	//argv[1] = hello, argv[2] = world
	
	for(i = 1; i < argc; i++)
		printf("%d = %s%s\n",i, argv[i], (argc > 1) ? " " : "");
	
	while(--argc > 0)
		printf("%s%s", *++argv, (argc > 1) ? " " : "");
	printf("\n");

		printf("TRUE %s", (*++argv)[0]);
	//	printf((argc > 1) ? "%s " : "%s", *++argv);
	printf("\n");

}


