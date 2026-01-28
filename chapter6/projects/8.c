#include <stdio.h>

int main(void)
{
	int n, i, d, p;
	
	printf("Enter the number of days in a month: ");
	scanf("%d", &n);

	printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &d);

	for(i = 1; i < d; i++)
		printf("    ");

	for(i = 1; i <= n; i++)
	{
		p = (d - 1) + i;
		printf(" %2d ", i);
		if(p % 7 == 0) 
			printf("\n");
	}

	printf("\n");
	
	return 0;
}
