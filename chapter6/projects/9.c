#include <stdio.h>

#define HUNDRED 100.0f

int main(void)
{
	int i, n_payments;
	float loan, interest_rate, monthly_payment, converted_interest;


	printf("Enter amount of loan: ");		
	scanf("%f", &loan);

	printf("Enter interest rate: ");		
	scanf("%f", &interest_rate);
	
	printf("Enter monthly payment: ");		
	scanf("%f", &monthly_payment);

	printf("Number of payments: ");
	scanf("%d", &n_payments);

	converted_interest = (interest_rate / HUNDRED) / 12.0f;

	for(i = 0; i < n_payments; i++)
	{ 
		loan = (loan - monthly_payment)	+ loan * converted_interest;	
		printf("Balance remaining after payment %d: %.2f\n", i + 1, loan);	
	}

	return 0;
}

