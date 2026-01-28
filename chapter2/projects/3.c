#include <stdio.h>

#define FRACTION (4.0f/3.0f)
#define PI 3.14159

int main()
{
	float radius, volume;
	
	printf("Enter radius: ");
	scanf("%f", &radius);

	volume = FRACTION * PI * radius * radius * radius;

	printf("The volume of a sphere with a radius of %.2f meters is: %2.f\n", radius, volume);

	return 0;
}
