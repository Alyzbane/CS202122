#include<stdio.h>

int main(void) {
	// create a 2D array but don't set its initial values
	int ticTacToe[3][3];

	// create a loop from row 0 to row 2
	for(int row = 0; row < 3; row++) {

		printf("Enter row %d values:\n", row);

		// for each of the rows, create a 
		// loop from column 0 to column 2
		for(int col = 0; col < 3; col++) {

			// take in the user input here
			printf("Column %d: ", col);
			scanf("%d", &ticTacToe[row][col]);

		}

		printf("\n\n");
	}

	// create a flag variable that stores the winner
	// 0 = no winner, -1 = X wins, 1 = O wins
	// This is initially set to 0 because we haven't
	// determined the winner yet
	int winner = 0;

	// we loop through each of its rows to see 
	// if there's a 3-straight horizontal pattern
	for(int row = 0; row < 3; row++) {
		if(
			ticTacToe[row][0] == ticTacToe[row][1] &&
			ticTacToe[row][1] == ticTacToe[row][2]
		) {
			// we check if the element found in one of its
			// columns to determine who the winner is.
			if(ticTacToe[row][0] == 1) {
				winner = -1;
			} else {
				winner = 1;
			}

			// after we found a winner, we don't need to
			// check the other rows so we break from the loop
			break;
		}
	}

	// we check first if there's no winner yet before looping
	// through each of the ticTacToe board's columns
	if(winner == 0) {
		for(int col = 0; col < 3; col++) {
			if(
				ticTacToe[0][col] == ticTacToe[1][col] &&
				ticTacToe[1][col] == ticTacToe[2][col]
			) {
				// we check if the element found in one of its
				// columns to determine who the winner is.
				if(ticTacToe[0][col] == 1) {
					winner = -1;
				} else {
					winner = 1;
				}

				// after we found a winner, we don't need to
				// check the other columns so we break from the loop
				break;
			}
		}
	}

	// finally, we print the winner
	if(winner == 0) {
		printf("It's a tie!");
	} else if(winner == -1) {
		printf("X wins!");
	} else if(winner == 1) {
		printf("O wins!");
	}

	return 0;
}