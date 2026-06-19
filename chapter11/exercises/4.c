#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
	int i, j;
	
	printf("Before\nEnter value of i: ");
	scanf("%d", &i);

	printf("Enter value of two j: ");
	scanf("%d", &j);

	swap(&i, &j);

	printf("After\ni = %d\n", i);	
	printf("j = %d\n", j);

	return 0;
}
	
void swap(int *p, int *q)
{
	*p = *p + *q;
	*q = *p - *q;
	*p = *p - *q;	
}
