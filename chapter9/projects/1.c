#include <stdio.h>

#define SIZE 10

void selection_sort(int [], int);

int main(void)
{
	int array[SIZE],
	    i;

	printf("Enter ten diferent numbers separated by space: ");
	
	for(i = 0; i < SIZE; i++)
	{
		scanf("%d", &array[i]);
	}


	printf("Sorted array: ");
	
	selection_sort(array, SIZE);
	
	for(i = 0; i < SIZE; i++)
		printf("%d ", array[i]);
	
	putchar('\n');

	return 0;
}

void selection_sort(int array[], int n)
{
	// Base case hits if Array is a single element
	if(n == 0)
		return;

	int max = 0; // Assume first number in array is largest
	int temp,
	    i;

	// Searchest for largest number in array
	for(i = 1; i < n; i++)
	{
		if(array[max] < array[i])
		{
			max = i;
		}
	}

	temp = array[max];
	array[max] = array[n - 1];
	array[n - 1] = temp;
	
	selection_sort(array, n - 1);
}
