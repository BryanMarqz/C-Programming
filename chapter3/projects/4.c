#include <stdio.h>

int main(void)
{
	int area_code, first, last;
	
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf(" (%d )%d -%d", &area_code, &first, &last);
	
	printf("You entered %3.3d.%3.3d.%4.4d\n", area_code, first, last);

	return 0;
}
