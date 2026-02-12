#include <stdio.h>

int main(void)
{
	char ch;
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter two fractions separated by one of the following [+, -, *, /]: ");
	scanf("%d /%d %c %d /%d", &num1, &denom1, &ch, &num2, &denom2);

	switch(ch)
	{
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			printf("The sum is: %d/%d\n", result_num, result_denom);
			break;
		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			printf("The subtraction is: %d/%d\n", result_num, result_denom);
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			printf("The multiplication is: %d/%d\n", result_num, result_denom);
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			printf("The division is: %d/%d\n", result_num, result_denom);
			break;
		default:
			printf("ERROR: Not a valid operation.\n");
			break;
	}
	return 0;
}

