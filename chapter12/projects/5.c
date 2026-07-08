#include <stdio.h>

#define N 256
int main(void)
{
	char array[N], ch;
	char *p, *j, *end;

	printf("Enter a sentence: ");
	
	for(p = array; (ch = getchar()) != '.' && ch != '?' && ch != '!' && ch != '\n'; p++)
	{
		*p = ch;	
	}

	end = p - 1;

	printf("Reversal of sentence: ");
	
	p = end;

	for(;;)
	{
		if(*p == ' ')
		{
			for(j = p + 1; j <= end; j++)
				printf("%c", *j);
			putchar(' ');
			end = p - 1;
		}
		
		if(p == array)
			break;
		p--;
	}
	
	for(j = array; j <= end; j++)
	{
		printf("%c", *j);
	}
	
	printf("%c\n", ch);
	return 0;
}
