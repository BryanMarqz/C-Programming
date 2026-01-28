#include <stdio.h>

int main(void)
{
	int num, d, spare;
	
	printf("Enter a number: ");
	scanf("%d", &num);

	spare = num;		
	
	if(num < 0)
		num = -num;
	if(num >= 0 && num <= 9)
		d = 1;			
	else if(num <= 99)
		d = 2;
	else if(num <=999)
		d = 3;
	else if(num <= 9999)
		d = 4;

	printf("The number %d has %d digits\n", spare, d);

	return 0;
}
