#include<stdio.h>

int main(void) {
	int rows, cols;

	printf("Enter rows: ");
	scanf("%d", &rows);

	printf("Enter cols: ");
	scanf("%d", &cols);

	// use the value of `rows` and `cols`
	// to create the 2D array
	int matrix[rows][cols];

	// scan elements from the user and
	// store them in the 2D array
	for(int row = 0; row < rows; row++) {
		for(int col = 0; col < cols; col++) {
			scanf("%d", &matrix[row][col]);
		}
	}

	// print all the elements of the 2D array
	printf("\n\nElements of the 2D array:\n");
	for(int row = 0; row < rows; row++) {
		for(int col = 0; col < cols; col++) {
			printf("%d ", matrix[row][col]);
		}

		printf("\n");
	}
}