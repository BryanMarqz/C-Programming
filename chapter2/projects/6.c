#include <stdio.h>

int main(void)
{
	float x = 0.0f, poly;

	printf("Enter a value for x: ");
	scanf("%f", &x);
	
	poly = (((((3.0f * x) + 2.0f) * x - 5.0f)  * x - 1.0f) * x + 7.0f) * x - 6.0f;
	printf("The value of ((((3.0f + 2) * x - 5)  * x - 1) * x + 7) * x - 6: %.2f\n", poly);

	return 0;
}
