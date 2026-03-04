#include <stdio.h>
#include <ctype.h>

#define N 256

#define SIZE (int) (sizeof(message)/sizeof(message[0]))

int main(void)
{
	char message[N];
	int i = 0;

	printf("Enter message: ");
	while((message[i] = getchar()) != '\n')
	{
		if(i == 0)
			printf("In B1FF-speak: ");
	
		switch(toupper(message[i]))
		{
			case 'A':
				putchar('4');
				break;
			case 'B':
				putchar('8');
				break;
			case 'E':
				putchar('3');
				break;
			case 'I':
				putchar('1');
				break;
			case 'O':
				putchar('0');
				break;
			case 'S':
				putchar('5');
				break;
			default:
				putchar(toupper(message[i]));
				break;
		}
		i++;
	}
	
	printf("!!!!!!!!!!\n");	

	return 0;
}
