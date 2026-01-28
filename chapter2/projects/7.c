#include <stdio.h>

int main(void)
{
	int amount, needed;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	needed = amount / 20;
	printf("$20 bills: %d\n", needed);
	amount = amount - (needed * 20); 	

	needed = amount / 10;
	printf("$10 bills: %d\n", needed);
	amount = amount - (needed * 10); 	

	needed = amount / 5;
	printf(" $5 bills: %d\n", needed);
	amount = amount - (needed * 5); 	

	needed = amount / 1;
	printf(" $1 bills: %d\n", needed);
	amount = amount - (needed * 1); 	

	return 0;
}
