#include <stdio.h>
 
int sum_array(const int *a, int n);
 
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
 
	int result = sum_array(arr, n);
 
	printf("Sum: %d\n", result);
 
	return 0;
}

int sum_array(const int *a, int n)
{
	int *p,
	    sum = 0;

	for(p = a; p < a + n; p++)
		sum += *p;
	return sum;
}
