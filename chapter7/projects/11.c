#include <stdio.h>

int main(void)
{
	char c, ch;
	
	printf("Enter a first and last name: ");
	scanf(" %c", &c);
	
	while((ch = getchar()) != ' ')
		;
	
	while((ch = getchar()) == ' ')
		;

	while((ch = getchar()) != '\n')
		putchar(ch);
	
	printf(", %c.\n", c);

	return 0;
}
