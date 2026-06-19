#include <stdio.h>

int *find_largest(int a[], int n);

int main(void) {
    int arr[] = {12, 45, 3, 78, 23, 56, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *result = find_largest(arr, n);

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Largest element: %d\n", *result);
    printf("Address of largest element: %p\n", (void *)result);

    return 0;
}

int *find_largest(int a[], int n)
{
	int *largest = &a[0];
	
	for(int i = 0; i < n; i++)
	{
		if(*largest < a[i])
		{
			*largest = a[i];
		}
	}
	return largest;
}
