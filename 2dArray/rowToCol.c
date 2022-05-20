//turning the 2d array into 90 degree
//basically turning the rows into columns
#include <stdio.h>

void reverse (int r, int c, int a[][c]);
void swap (int *a, int *b);
void transpose (int r, int c, int a[][c], int revArr[][10]);

int main()
{
  int row, col, revArr[10][10];
  printf("Enter the number of rows: ");
  scanf(" %d", &row);
  
  printf("Enter the number of columns: ");
  scanf(" %d", &col);
  
  int matrix[row][col];
  for(int i = 0; i < row; i++) 
  {
    printf("Row #%d: ", i+1);
	for(int j = 0; j < col; j++) 
      	{
			scanf("%d", &matrix[i][j]);
		}
	}
  
  
  reverse(row, col, matrix);
  
  //switch the pos of arr elements
  transpose (row, col, matrix, revArr); 
  
  //printing the reversed array
  for(int i = 0; i < col; i++)
    {
      for(int j = 0; j < row; j++) //travesing the array values
        {
        	printf("%d ", revArr[i][j]);
        }
 	printf("\n");
    }
  
	
}

//swapping the elements
void swap (int *a, int *b)
{
	int temp = *a;
  	*a = *b;
  	*b = temp;
}

//reversing the array elements
void reverse (int r, int c, int a[][c])
{
  for (int i = 0; i < r; i++) 
  {
        int start = 0;
        int end = c - 1;
        while (start < end) 
        {
            swap(&a[i][start],
                 &a[i][end]); //swapping the values of array into reversed
            start++;
            end--;
		}
  }
}

void transpose (int r, int c, int a[][c], int revArr[][10])
{  
  //transposing the reversed array into new variable
  for(int n = 0; n < r; ++n)
    for(int k = 0; k < c; ++k)
      revArr[k][n] = a[n][k]; //putting row values into column

  printf("\n");
}