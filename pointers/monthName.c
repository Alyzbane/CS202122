#include <stdio.h>

//returning the name of the month
char *year(int n)
{
	static char *mN[] = 
    {
	"Illegal Year", "Jan", "Feb", "Mar", "Apr", "May",
	"Jun", "July", "Aug", "Sept", "Oct",
	"Nov", "Dec"
    };
	return (n < 1 || n > 12) ? mN[0] : mN[n];
}
int main()
{
		printf("%s", year(0));
}

