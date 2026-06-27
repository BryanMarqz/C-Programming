#include <stdbool.h>
#include <stdio.h>

bool search(const int a[], int n, int key);

int main(void)
{
    int a[] = {3, 7, 12, 18, 25, 31, 40};
    int n = sizeof(a) / sizeof(a[0]);

    int key1 = 18;
    int key2 = 99;

    printf("Searching for %d: %s\n", key1, search(a, n, key1) ? "found" : "not found");
    printf("Searching for %d: %s\n", key2, search(a, n, key2) ? "found" : "not found");

    return 0;
}

bool search(const int a[], int n, int key)
{
	const int *ptr;

	for(ptr = a; ptr < a + n; ptr++)
	{
		if(*ptr == key)
			return true;
	}
	return false;
}
