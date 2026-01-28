#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define BOOL int

int main(void)
{

	BOOL flag = FALSE;

	printf("This is false: %d\n", flag);
	
	flag = TRUE;	

	printf("This is true: %d\n", flag);

	return 0;
}
