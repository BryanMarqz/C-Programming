#include <stdio.h>

int main(void)
{
	int n, i;
	float e = 1.0f, prev_term = 1.0f;

	printf("Enter an integer: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		prev_term = prev_term / i;
		e += prev_term;
	}
	
	printf("The value of e is: %f\n", e);

	return 0;
}

