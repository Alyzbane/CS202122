#include <stdio.h>
//this function will find the position of N number in 2d array
void findPosition (int r, int c, int arr[][c], int clue);

int main()
{
  int row, col, culp;
  printf("Enter # of rows: ");
  scanf(" %d", &row);
  
  printf("Enter # of columns: ");
  scanf(" %d", &col);
  
  printf("Elements: ");
  int matrix[row][col];
  printf("\n");
  
  //scan for the array matrix
  for(int i = 0; i < row; i++) 
	for(int j = 0; j < col; j++) 
			scanf("%d", &matrix[i][j]);

  printf("Enter the culprit's value: ");
  scanf(" %d", &culp);
  
  findPosition(row, col, matrix, culp);
}


void findPosition (int r, int c, int arr[][c], int clue)
{
	for(int i = 0; i < r; i++)
    {
      for(int j = 0; j < c; j++)
      {
        if(arr[i][j] == clue) //comparing the value of traversed array
          printf("\nCulprit's position: %d, %d", i, j);
      }
    }
      
}