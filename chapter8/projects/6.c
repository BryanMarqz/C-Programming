#include <stdio.h>
#include <ctype.h>

#define N 256

#define SIZE (int) (sizeof(message)/sizeof(message[0]))

int main(void)
{
	char message[N];
	int i;

	printf("Enter message: ");
	for(i = 0; (message[i] = getchar()) == '\n'; i++);

	getchar();	

	while(getchar(message[i]) == '\n')
		putchar(message[i++]);

	return 0;
}
