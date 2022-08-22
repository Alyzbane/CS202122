#include<stdio.h>
#include<math.h>

void treasureChestMagic(int*);

int main(void) {
    // TODO: Write your code here
	int n;
  	printf("Enter n: ");
  	scanf(" %d", &n);
  	
  	treasureChestMagic(&n);
  	printf("Treasure Chest Magic Result = %d", n);
    return 0;
}

void treasureChestMagic(int *n) {
    int temp = *n;
    int temp2 = temp;

    *n = *n + 5 - 5 * 5 / 5;

    temp2 = (int) pow(2, 3);

    if(temp % 3 == 0) {
        *n = temp * 10;
    } else if(temp % 10 == 0) {
        *n = temp + 3;
    } else if(temp % 11 == 0) {
        *n = temp - 5;
    }
}