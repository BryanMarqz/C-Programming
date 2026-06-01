#include <stdio.h>

#define N 20

int main(void)
{
	char ch, last_name[N], initial;
	int i;
	
	printf("Enter a first and last name: ");
	
	initial = getchar();
	while(getchar() != ' ')
		;
	
	for(i = 0; (ch = getchar()) != '\n'; i++)
	{
		last_name[i] = ch; 
	}
	
	last_name[i] = '\0';
	
	printf("You entered the name: ");

	for(i = 0; last_name[i] != '\0'; i++)
	{
		printf("%c", last_name[i]);
	}
	printf(", %c.\n", initial);	
	
	return 0;
}
