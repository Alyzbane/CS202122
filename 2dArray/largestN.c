#include<stdio.h>
#include<limits.h>

//find the largest N in 2d array
int findElephant(int arr[][100]);

int main(void) {
    int matrix[100][100] = {
        {1, 3, 33, 109, 2, 65, 32, 28, 129, 75},
        {2, 44, 59, 8, 231, 632, 55, 205, 98, 1},
        {76, 2, 321, 16, 209, 65, 12, 167, 259, 29},
        {0, 103, 99, 3, 2, 65, 32, 321, 53, 75},
        {44, 264, 50, 7, 142, 65, 100, 28, 98, 33},
        {87, 22, 99, 67, 22, 412, 99, 502, 52, 24},
        {91, 93, 233, 101, 330, 65, 98, 28, 98, 76},
        {12, 65, 59, 99, 2, 65, 32, 333, 10, 88},
        {3, 24, 101, 331, 542, 65, 32, 239, 338, 175},
        {76, 3, 59, 21, 229, 65, 32, 28, 98, 75},
    };

	printf("Elephant: %d", findElephant(matrix));
    return 0;
}

int findElephant(int arr[][100]) {
   
   //holding the biggest value of sorted array
    int largest = INT_MIN;

    for(int row = 0; row < 100; row++) {
        for(int col = 0; col < 100; col++) {
            if(arr[row][col] > largest) {
                largest = arr[row][col];
            }
        }
    }
    return largest;
}