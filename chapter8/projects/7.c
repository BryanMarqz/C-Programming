#include <stdio.h>

#define N 5
#define SIZE (int) (sizeof(matrix) / sizeof(matrix[0]))

int main(void)
{
	int matrix[N][N] = {0}, i, j;
	
	for(i = 0; i < SIZE; i++)
	{
		printf("Enter row %d: ", i + 1);
		for(j = 0; j < SIZE; j++)
			scanf("%d", &matrix[i][j]);
	}
	
	printf("\nRow totals: ");
	for(i = 0; i < SIZE; i++)
	{
		int sum = 0;
		for(j = 0; j < SIZE; j++)
			sum += matrix[i][j];
		printf("%d ", sum);
	}
	printf("\n");

	printf("Colums totals: ");
	for(i = 0; i < SIZE; i++)
	{
		int sum = 0;
		for(j = 0; j < SIZE; j++)
			sum += matrix[j][i];
		printf("%d ", sum);
	}
	printf("\n");


	return 0;
}
