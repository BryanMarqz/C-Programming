#include <stdio.h>

int compute_polynomial(int n);

int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("Result: %d\n", compute_polynomial(n));

	return 0;
}

int compute_polynomial(int n)
{
	return (3 * (n * n * n * n * n)) + (2 * ( n * n * n * n)) - (5 * ( n * n * n)) - (n * n) + (7 * n) - (6);
}
