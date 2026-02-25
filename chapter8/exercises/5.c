#include <stdio.h>

#define N 40
#define SIZE (long int) (sizeof(fib_numbers) / sizeof(fib_numbers[0]))

int main(void)
{
	int i;
	long int fib_numbers[N] = {0, 1};
	
	for(i = 0; i < SIZE; i++)
	{
		if(i >= 2)
			fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2]; 	
		printf("%ld\n", fib_numbers[i]);
	}

	return 0;
}
