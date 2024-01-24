/**
* prime - check recursivly if n is a prime
* @n: passed number
* @i: start
*
* Return: (1) if prime, (0) otherwise
*/
int prime(int n, int i)
{
	int x = n % i;

	if (i >= n && n > 1)
		return (1);
	else if (x == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}

/**
* is_prime_number - check if passed number is a prime
* @n: passed number
*
* Return: (1) if prime, (0) otherwise
*/
int is_prime_number(int n)
{
	return (prime(n, 2));
}
