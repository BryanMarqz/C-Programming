#include <stdio.h>

#define N  10
#define FALSE 0
#define TRUE 1

typedef int BOOL;

int main(void)
{
	BOOL digit_seen[N] = {FALSE};
	int d, n;
	
	printf("Enter a number: ");
	scanf("%d", &n);

	while(n > 0)
	{
		d = n % 10;	
		if(digit_seen[d] == TRUE)
			break;
		n /= 10;
	}
	
	if(n < 0)
		printf("It has repeated digits.\n");
	else
		printf("No repeated digits.\n");

	return 0;
}
