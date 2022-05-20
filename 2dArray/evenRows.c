#include <stdio.h>

void evenRow (int r, int c, int arr[][c]);

int main()
{
  int row, col;
  printf("Enter # of rows: ");
  scanf(" %d", &row);
  
  printf("Enter # of columns: ");
  scanf(" %d", &col);
  
  printf("Enter elements: ");
  int matrix[row][col];
  printf("\n");
  
  //scan for the array matrix
  for(int i = 0; i < row; i++) 
	for(int j = 0; j < col; j++) 
			scanf("%d", &matrix[i][j]);
  
  
  printf("\n");
  evenRow(row, col, matrix);
}

void evenRow (int r, int c, int arr[][c])
{
   //variable that will hold the value of every rows
  int sum;
  /*
   simply change the i into j if we want to traversed into column
  */
  for (int i = 0; i < c; i++)//use column first
  {
    for(int j = 0 ; j < c; j++) //row is the second
    {
        sum = sum + arr[i][j]; //iterate
    }
    if(sum % 2 == 0) //get the even number from sum
    {
      printf ("Even row: %d", i);
      break;
    }
    sum = 0;//go back to zero after if statement fail
  }
}