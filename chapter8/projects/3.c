#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	while(true)
	{
		int digit, n;
		bool repeated[10] = {false};

		printf("Enter number: ");
		scanf("%d", &n);

		if(n <= 0)
		{
			printf("Thank you for using my program!\n");
			break;
		}

		while(n > 0)
		{
			digit = n % 10;
			if(repeated[digit] == true)	
			{
				break;
			}
			repeated[digit] = true;
			n /= 10;
		}	
		if(n <= 0)
			printf("No repeated digit(s)\n");
		else
			
			printf("Repeated digit(s)\n");
	}

	return 0;
}
