#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
	int row, col, direction[4] = {0, 1, 2, 3}, temp_row, temp_col;
	char board[N][N], letters = 'A';
	
	for(row = 0; row < N; row++)
	{
		for(col = 0; col < N; col++)
			board[row][col] = 0;
	}
	
	board[0][0] = letter++;
	
	while(letter <= 'Z')

	return 0;
}
