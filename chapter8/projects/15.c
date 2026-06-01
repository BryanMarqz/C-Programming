#include <stdio.h>

#define N 80

int main(void)
{
	char array[N], ch;
	int i, end, n;

	printf("Enter message to be encrypted: ");
	
	for(i = 0; (ch = getchar()) != '\n'; i++)
	{
		array[i] = ch;
	}
	
	end = i - 1;

	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	printf("Encrypted message: ");

	for(i = 0; i <= end; i++)
	{
		ch = array[i];
		if(ch >= 'a' && ch <= 'z' )
			putchar((((ch - 'a') + n) % 26 + 'a'));
		else if(ch >= 'A' && ch <= 'Z')
			putchar((((ch - 'A') + n) % 26 + 'A'));	
		else
			putchar(ch);
	}	
	putchar('\n');

	return 0;
}
