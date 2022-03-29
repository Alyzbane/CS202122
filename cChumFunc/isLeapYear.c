#include<stdio.h>

int isLeapYear(int);

int main(void) {
    // TODO: Write your code here
    int date;
    printf("Enter year: ");
    scanf(" %d", &date);
    
    if (isLeapYear(date) == 1) 
      printf("%d is a leap year", date);//once the function returns 1 print leap year
    else 
      printf("%d is not a leap year", date); //if it returns other number than 1 switch to else and print not leap year
    return 0;
}

int isLeapYear(int n) {
    if(
        (n % 4 == 0 && n % 100 != 0) || 
        (n % 100 == 0 && n % 400 == 0)
    ) {
        return 1;
    }

    return 0;
}