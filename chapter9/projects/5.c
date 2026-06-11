#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
	int size;
	
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &size);

	char array[size][size];

	create_magic_square(size, array);
	print_magic_square(size, array);
	
	return 0;
}

void create_magic_square(int size, char array[size][size])
{
	int row,
	    col = 0,
	    u_row,
	    u_col, 
	    count = 0;
	
	row = 0;
	col = size / 2;
	array[row][col] = 1;

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			array[i][j] = 0;
		}
	}


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
}

void print_magic_square(int size, char array[size][size])
{
	int row,
	    col;

	for(row = 0; row < size; row++)
	{
		for(col = 0; col < size; col++)
			printf("%5d", array[row][col]);
		putchar('\n');
	}
}
