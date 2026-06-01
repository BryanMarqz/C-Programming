#include <stdio.h>
#include <ctype.h>

#define N 26
#define SIZE 65

int main(void)
{
	char ch;
	int sum = 0,
	    array[N] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	
	printf("Enter a word: ");

	while((ch = getchar()) != '\n')
	{
		sum += array[toupper(ch) - SIZE];
	}	
	
	printf("Scrabble value: %d\n", sum);

	return 0;
}
