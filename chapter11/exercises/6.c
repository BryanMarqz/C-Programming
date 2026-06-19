void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	*largest = *second_largest = a[0];

	for(int i = 1; i < n; i++)
	{
		if(*largest < a[i])
			*largest = a[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] < *largest && a[i] > *second_largest)
			*second_largest = a[i];
	}
}
