#include <stdio.h>

int fact(int n) {

	int result = 1;
	int i;
	for(i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main(void)
{
	printf("%d\n", fact(6));
	return 0;
}	
