#include <stdio.h>

int main(void)
{
	int m, n, r, b, v;
	
	printf("Enter a fraction: ");
	scanf("%d /%d", &m, &n);

	b = m;
	v = n;	

	while(n > 0)
	{	
		r = m % n;	
		m = n;
		n = r;
	}
	
	printf("In lowest terms: %d/%d\n", b / m, v / m);

	return 0;
}
