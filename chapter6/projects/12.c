#include <stdio.h>

int main(void)
{
	int i = 1;
	float e = 1.0f, prev_term = 1.0f, eps;

	printf("Enter the value of epsilon: ");
	scanf("%f", &eps);

	while(prev_term >= eps)
	{
		prev_term = prev_term / i;
		e += prev_term;
		i++;
	}
	
	printf("Epsilon used was:%f\nThe value of e is: %f\n", eps, e);	
	return 0;
}

