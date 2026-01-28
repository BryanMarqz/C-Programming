#include <stdio.h>

int main(void)
{
	int one, two, three;
	
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &one, &two, &three);

	printf("The reversal is: %d%d%d\n", three, two, one);

	return 0;
}
