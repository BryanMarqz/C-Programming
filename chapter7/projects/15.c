#include <stdio.h>

int main(void)
{
	int i, num, fact = 1;
	
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++)
		fact = fact * i;
	
	printf("Factorial of %d: %d\n", num, fact);

	return 0;
}
