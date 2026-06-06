int largest(int a[], int n)
{
	int i,
	    max = a[0];

	for(i = 1; i < n; i++)
	{
		if(a[i] > max)
			max = a[i];
	}
	return max;
}

double average(int a[], int n)
{
	int i;
	double sum = 0;
	
	for(i = 0; i < n; i++)
		sum += a[i];

	return sum / n;
}

int positive_elements(int a[], int n)
{
	int i,
	    num = 0;

	for(i = 0; i < n; i++)
	{
		if(a[i] > 0)
			num++;
	}

	return num;
}
