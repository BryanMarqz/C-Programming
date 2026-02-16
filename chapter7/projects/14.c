#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define EPS 0.00001

int main(void)
{
	double x, y = 1.0, old_y = 0.0, result = 0.0;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	while(true)
	{
		if(fabs((old_y - y)) < (EPS * y))
			break;
		old_y = y;
		result = ((x / y) + y) / 2.0;
		y = result;	
	}
	
	printf("Square root: %.5lf\n", result);	
	return 0;
}

