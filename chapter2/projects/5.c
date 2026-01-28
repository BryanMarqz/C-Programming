#include <stdio.h>

int main(void)
{
	float x = 0.0f, poly;

	printf("Enter a value for x: ");
	scanf("%f", &x);
	
	poly = 3.0f * (x * x * x * x * x) + (2.0f * x * x * x * x) - 5.0f * (x * x * x) - 1.0f * (x * x) + 7.0f * x - 6.0f;
	printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: %.2f\n", poly);

	return 0;
}
