#include <stdio.h>

#define N 15

int main(void)
{
	char phone_number[N];
	int i;
	
	printf("Enter phone number: ");
	for(i = 0; (phone_number[i] = getchar()) != '\n'; i++)
		;

	phone_number[i] = '\0';

	printf("In numeric form: ");

	for(i = 0; i < N; i++)
	{

		if(phone_number[i] == '\0')
			break;	

		switch(phone_number[i])
		{
			case 'a': case 'A': case 'b': case 'B': case 'c': case 'C':
				printf("2");
				break;
			
			case 'd': case 'D': case 'e': case 'E': case 'f': case 'F':
				printf("3");
				break;
		
			case 'g': case 'G': case 'h': case 'H': case 'i': case 'I':
				printf("4");
				break;
		
			case 'j': case 'J': case 'k': case 'K': case 'l': case 'L':
				printf("5");	
				break;				

			case 'm': case 'M': case 'n': case 'N': case 'o': case 'O':
				printf("6");
				break;				

			case 'p': case 'P': case 'r': case 'R': case 's': case 'S':
				printf("7");
				break;

			case 't': case 'T': case 'u': case 'U': case 'v': case 'V':
				printf("8");
				break;

			case 'w': case 'W': case 'x': case 'X': case 'y': case 'Y':
				printf("9");
				break;
			
			default:
				putchar(phone_number[i]);
				break;
		};
	}
	printf("\n");

	return 0;
}
