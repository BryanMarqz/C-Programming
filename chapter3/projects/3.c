#include <stdio.h>

int main(void)
{
	int gs1, identifier, publisher, item, check;

	printf("Enter ISBN: ");
	scanf("%d -%d -%d -%d -%d", &gs1, &identifier, &publisher, &item, &check);
	
	printf("GS1 prefix: %3.3d\n", gs1);
	printf("Group identifier: %1.1d\n", identifier);
	printf("Publisher code: %3.3d\n", publisher);
	printf("Item number: %5.5d\n", item);
	printf("Check digit: %1.1d\n", check);
	
	return 0;
}
