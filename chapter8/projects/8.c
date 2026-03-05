#include <stdio.h>

#define N 5
#define SIZE (int) (sizeof(matrix) / sizeof(matrix[0]))

int main(void)
{
	int matrix[N][N] = {0}, i, j;
	
	for(i = 0; i < SIZE; i++)
	{
		printf("Enter five quizzes for student %d: ", i + 1);
		for(j = 0; j < SIZE; j++)
			scanf("%d", &matrix[i][j]);
	}
	
	printf("\nTotal of each student:\n");
	for(i = 0; i < SIZE; i++)
	{
		int sum = 0;
		for(j = 0; j < SIZE; j++)
			sum += matrix[i][j];
		printf("%d)%d\n", (i + 1), sum);
	}

	printf("\nAverage of each student:\n");
	for(i = 0; i < SIZE; i++)
	{
		float sum = 0;
		for(j = 0; j < SIZE; j++)
			sum += matrix[i][j];
		printf("%d)%.2f\n", (i + 1), sum / N);
	}

	printf("\nAverage of each quiz:\n");
	for(i = 0; i < SIZE; i++)
	{
		float sum = 0;
		for(j = 0; j < SIZE; j++)
			sum += matrix[j][i];
		printf("%d)%.2f\n", (i + 1), sum / N);
	}

	printf("\nHighest score per quiz:\n");
	for(i = 0; i < SIZE; i++)
	{
		int max = 0;
		for(j = 0; j < SIZE; j++)
			max = (matrix[j][i] >= max) ? matrix[j][i]: max;
		printf("%d)%d\n", (i + 1), max);
	}

	printf("\nLowest Score per quiz:\n");
	for(i = 0; i < SIZE; i++)
	{
		int min = 1000;
		for(j = 0; j < SIZE; j++)
			min = (matrix[j][i] <= min) ? matrix[j][i]: min;
		printf("%d)%d\n", (i + 1), min);
	}

	return 0;
}
