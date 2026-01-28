#include <stdio.h>

int main(void)
{
	int min_m, min_d, min_y;
	
	do
	{

		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d /%d /%d", &min_m, &min_d, &min_y);

	} while((min_m != 0) && (min_d != 0) && (min_y != 0));
	
	printf("%d/%d/%d is the earliest date\n", min_m, min_d, min_y);

	return 0;
}
