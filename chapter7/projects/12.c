#include <stdio.h>

int main(void)
{
	float sum = 0.0f, current_value = 0.0f;
	char ch;

	printf("Enter an expression: ");
	scanf("%f", &current_value);

	while((ch = getchar()) != '\n')	
	{
		switch(ch)
		{
			case '+':
				scanf("%f", &sum);
				current_value += sum;
				break;
			case '-':
				scanf("%f", &sum);
				current_value -= sum;
				break;
			case '*':
				scanf("%f", &sum);
				current_value *= sum;
				break;
			case '/':
				scanf("%f", &sum);
				current_value /= sum;
				break;
			default:
				break;
		}
	} 
	printf("Value of expression: %f\n", current_value);

	return 0;
}
