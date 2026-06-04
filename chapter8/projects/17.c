#include <stdio.h>

#define N 99

int main(void)
{
	int row,
	    col,
	    u_row,
	    u_col, 
	    size,
	    array[N][N] = {0},
	    count;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &size);

	row = 0;
	col = size / 2;
	array[row][col] = 1;

	for(count = 2; count <= size * size; count++)
	{
		u_row = (row - 1 + size) % size;
		u_col = (col + 1) % size;
		
		if(array[u_row][u_col] == 0)
		{
			row = u_row;
			col = u_col;
		}
		else
			row = (row + 1) % size;
		array[row][col] = count;
	}

	for(row = 0; row < size; row++)
	{
		for(col = 0; col < size; col++)
			printf("%5d", array[row][col]);
		putchar('\n');
	}

	return 0;
}
