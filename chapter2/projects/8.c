#include <stdio.h>

#define HUNDRED 100.0f

int main(void)
{
	float loan, interest_rate, monthly_payment, converted_interest;


	printf("Enter amount of loan: ");		
	scanf("%f", &loan);

	printf("Enter interest rate: ");		
	scanf("%f", &interest_rate);
	
	printf("Enter monthly payment: ");		
	scanf("%f", &monthly_payment);


	converted_interest = (interest_rate / HUNDRED) / 12.0f;

	loan = (loan - monthly_payment)	+ loan * converted_interest;	
	printf("Balance remaining after first payment: %.2f\n", loan);	

	loan = (loan - monthly_payment)	+ loan * converted_interest;
	printf("Balance remaining after second payment: %.2f\n", loan);

	loan = (loan - monthly_payment)	+ loan * converted_interest;
	printf("Balance remaining after third payment: %.2f\n", loan);


	return 0;
}

