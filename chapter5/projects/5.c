#include <stdio.h>

int main(void)
{
	float income;
	
	printf("Enter the amount of taxable income: ");
	scanf("%f", &income);

	if(income < 750.00f)
		printf("Tax due: $%.2f\n", income * 0.01f);
	else if(income <= 2250.00f)
		printf("Tax due: $%.2f\n", 7.50f + (income - 750.00f) * 0.02f);
	else if(income <= 3750.00f)
		printf("Tax due: $%.2f\n", 37.50f + (income - 2250.00f) * 0.03f);
	else if(income <= 5250.00f)
		printf("Tax due: $%.2f\n", 82.50f + (income - 3750.00f) * 0.04f);
	else if(income <= 7000.00f)
		printf("Tax due: $%.2f\n", 142.50f + (income - 5250.00f) * 0.05f);
	else
		printf("Tax due: $%.2f\n", 230.00f + (income - 7000.00f) * 0.06f);

	return 0;
}
