#include <stdio.h>
#include <ctype.h>

#define N 256

int main(void)
{
	char message[N], *p = message, *q = message, ch;

	printf("Enter a message: ");
	
	while((ch = toupper(getchar())) != '\n' && p < message + N)
	{
		if(isalpha(ch))
			*p++ = ch;
	}

	p--;

	while(p > q)	
	{
		if(*p != *q)
		{
			printf("Not a palindrome\n");
			return 0;
		}
		--p;
		++q;
	}	

	printf("Palindrome\n");
	
	return 0;
}
