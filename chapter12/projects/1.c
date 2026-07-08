#include <stdio.h>

#define N 256

int main(void)
{
	char message[N],
	     ch,
	    *p = message;

	printf("Enter a message: ");
	
	while((ch = getchar()) != '\n' && p < message + N)
		*p++ = ch;

	printf("Reversal is: ");
	
	p--;
	while(p >= message)
		putchar(*p--);
	
	printf("\n");

	return 0;
}
