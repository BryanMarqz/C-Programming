int num_digits(int n)
{
	int digits = 0;
	
	if(n < 0)
		n = -n;
	if(n == 0)
		return 1;

	while(n > 0)
	{
		n /= 10;
		digits++;
	}
	return digits;
}
