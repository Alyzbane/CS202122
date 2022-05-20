#include<stdio.h>

//printing multiple times of 2d array input values
void flex2D(int[][5]);

int main(void) {
    int matrix[5][5];

    printf("Enter the elements:\n");
    for(int row = 0; row < 5; row++) {
        for(int col = 0; col < 5; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("\nFlex:\n");

    flex2D(matrix);

    return 0;
}

void flex2D(int arr[][5]) {
  for (int i = 0; i < 5; i++)//use column first
  {
    for(int j = 0 ; j < 5; j++) //row is the second
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
    //create a multiple for condition calling the row 
    //to print multiple times
    for(int j = 0 ; j < 5; j++) //row is the second
    {
        printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}