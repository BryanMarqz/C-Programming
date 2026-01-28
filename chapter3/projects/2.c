#include <stdio.h>

int main(void)
{
	int item, month, day, year;
	float unit_price; 

	printf("Enter item number: ");
	scanf("%d", &item);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);
		
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d /%d /%d", &month, &day, &year); 

	printf("\nItem\t\tUnit\t\tPurchases\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%-d\t\t$%7.2f\t%2.2d/%2.2d/%4.4d\n", item, unit_price, month, day, year);

	return 0;
}
