#include <stdio.h>
#include <ctype.h>

#define MINUTES 60

int main(void)
{
	int hour, min;
	char ch;

	printf("Enter 12-hour time followed by AM or PM: ");
	scanf("%d :%d %c", &hour, &min, &ch);
	
	if(toupper(ch) == 'A')
	{
		if(hour == 12)
			printf("Equivalent 24-hour time: %d:%d\n", 0, min);	
		else
			printf("Equivalent 24-hour time: %d:%d\n", hour, min);
	}
	else
	{
		if(hour == 12)
			printf("Equivalent 24-hour time: %d:%d\n", hour, min);
		else
			printf("Equivalent 24-hour time: %d:%d\n", hour + 12, min);
	}

	return 0;
}
