#include <stdio.h>

void reduce(int , int ,
            int *, int *);

int main(void)
{
	int n, d, r_n, r_d;
	
	printf("Enter a fraction: ");
	scanf("%d /%d", &n, &d);

	reduce(n, d, &r_n, &r_d);

	printf("In lowest terms: %d/%d\n", r_n, r_d);

	return 0;
}

void reduce(int n, int d,
            int *r_n, int *r_d)
{
	int r, orig_n = n, orig_d = d;

	while(d != 0)
	{	
		r = n % d;	
		n = d;
		d = r;
	}

	*r_n = orig_n / n;
	*r_d = orig_d / n; 	
}
