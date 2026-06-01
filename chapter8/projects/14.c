#include <stdio.h>

#define N 256
int main(void)
{
	char array[N], ch;
	int i, j, end;

	printf("Enter a sentence: ");
	
	for(i = 0; (ch = getchar()) != '.' && ch != '?' && ch != '!'; i++)
	{
		array[i] = ch;	
	}

	end = i - 1;

	printf("Reversal of sentence: ");
	
	for(i = end; i >= 0; i--)
	{
		if(array[i] == ' ')
		{
			for(j = i + 1; j <= end; j++)
				printf("%c", array[j]);
			putchar(' ');
			end = i - 1;
		}
	}
	
	for(j = 0; j <= end; j++)
	{
		printf("%c", array[j]);
	}
	
	printf("%c\n", ch);
	return 0;
}
