#include <stdio.h>

int main(void)
{
	int x, y, z;
	float a, b, c;
	
	printf("%d\n%d\n%d\n", x, y, z); // Prints zero but maybe the because it's a modern compiler
	printf("%f\n%f\n%f\n", a, b, c); // Prints mostly zero but one variable prints garbage results, variable (b).

	return 0;
}
