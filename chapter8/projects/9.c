#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void)
{
	int board[N][N] = {0}, row = 0, col = 0;
	char letter = 'A';

	board[row][col] = letter++;

	srand((unsigned) time(NULL));

	while(letter <= 'Z')
	{
		int direction[4] = {0, 1, 2, 3};
		
		for(int i= 0; i < 4; i++)
		{
			int j = rand() % 4;	
			int temp = direction[i];
			direction[i] = direction[j];
			direction[j] = temp;
		}
		
		int moved = 0;

		for(int i = 0; i < 4; i++)
		{
			int temp_row = row;
			int temp_col = col;
			
			if(direction[i] == 0)
				--temp_row;
			else if(direction[i] == 1)
				++temp_col;
			else if(direction[i] == 2)
				++temp_row;
			else if(direction[i] == 3)
				--temp_col;
			
			if(temp_row >= 0 && temp_row < N &&
			   temp_col >= 0 && temp_col < N &&
			   board[temp_row][temp_col] == 0)
			{
				row = temp_row;
				col = temp_col;
				board[row][col] = letter++;
				moved = 1;
				break;
			}
		}

		if(!moved)
			break;
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			if(board[i][j] == 0)
				board[i][j] = '.';
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	return 0;
}
