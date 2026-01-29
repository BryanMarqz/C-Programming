#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	int min_m, min_d, min_y, new_m, new_d, new_y;
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &min_m, &min_d, &min_y);

	if(min_m == 0 && min_d == 0 && min_y == 0)
		exit(EXIT_SUCCESS);

	if(min_m <= 0 || min_d <= 0 || min_y <= 0)
	{
		printf("Enter a valid date.\n");
		exit(EXIT_SUCCESS);
	}

	do
	{

		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d /%d /%d", &new_m, &new_d, &new_y);

		if(new_m == 0 && new_d == 0 && new_y == 0)
			break;

		if(new_m <= 0 || new_d <= 0 || new_y <= 0)
		{
			printf("Enter a valid date.\n");
			exit(EXIT_SUCCESS);
		}

		else if((new_y < min_y) ||
			(new_y == min_y) && (new_m < min_m) ||
			(new_y == min_y) && (new_m == min_m) && (new_d < min_d))	
		{
			min_m = new_m, min_d = new_d, min_y = new_y;
		}

	} while(true);
	
	printf("%d/%d/%d is the earliest date\n", min_m, min_d, min_y);

	return 0;
}
