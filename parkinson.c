long long ft_pow(long long k, long long m)
{
	long long h;		
	
	h = k;
	while (m--)
		h = h * k;
	return (h);
}

long long ft_parkinson(long long k, long long m, long long y, long long  a, long long n)
{
	return ((100 * ((2 * ft_pow(k, m) + a))) / (y * n));
}
