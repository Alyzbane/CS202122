#include <stdio.h>

int dayYear (int year, int month, int day);
char *year(int n);
void monthDay (int year, int yearday, int *month, int *day);

static char daytab[2][13] = 
{
	{0, 31, 28, 31, 30 ,31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main()
{
	int pm = 0, pday = 0;
	monthDay(2022, 130, &pm, &pday);
			printf("%d : %s", dayYear(2022, 7, 11), year(7));	
			printf("\n%s / %d  / %d ", year(pm), pm, pday); 
}

//calculating the day of the year
int dayYear (int year, int month, int day)
{
	int i, leap;
	leap = year % 40 == 0 && year % 100 != 0 || year % 400 == 0;
	for( i = 1; i < month; i++)
		day += daytab[leap][i];

	return day;
}

// calculating the month and day through cumlative day of the year
void monthDay (int year, int yearday, int *month, int *day)
{
	int i, leap;
	leap = year % 40 == 0 && year % 100 != 0 || year % 400 == 0;
	for( i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	*month = i;
	*day  =yearday;

}
//array of pointers will return the n year input name
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

