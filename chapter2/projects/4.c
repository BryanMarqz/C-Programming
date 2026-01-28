#include <stdio.h>

#define PERCENT 0.05f

int main(void)
{
	float amount, tax;

	printf("Enter an amount: ");
	scanf("%f", &amount);

        tax = amount * PERCENT;	
	
	printf("With tax added: $%.2f", amount + tax);
	return 0;
}

