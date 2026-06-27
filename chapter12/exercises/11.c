int find_largest(int *a, int n)
{
	int i, *max_ptr;
	
	max_ptr = a;

	for(i = 1; i < n; i++)
	{
		if(*(a + i) > *max_ptr)
			max_ptr = a + i;
	}
	return *max_ptr;
}
