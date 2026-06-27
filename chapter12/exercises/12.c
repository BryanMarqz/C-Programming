#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int arr[] = {4, 9, 2, 17, 6, 23, 1, 23, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest, second_largest;

    find_two_largest(arr, n, &largest, &second_largest);

    printf("Largest: %d\n", largest);
    printf("Second largest: %d\n", second_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
	*largest = *second_largest = *a;

	for(const int *p = a; p < a + n; p++)
	{
		if(*largest < *p)
			*largest = *p;
	}
	
	for(const int *p = a; p < a + n; p++)
	{
		if(*p < *largest && *p > *second_largest)
			*second_largest = *p;
	}
}
