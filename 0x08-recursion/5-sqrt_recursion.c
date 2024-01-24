/**
* get_sqrt - gets the sqrt of a number and pass it to _sqrt_recursion
* @n: base
* @i: initial natural sqr
*
* Return: (i) as a natural sqr, (-1) if no natural sqr
*/
int get_sqrt(int n, int i)
{
	int n_sqr = i * i;

	if (n_sqr == n)
		return (i);
	if (n_sqr > n)
		return (-1);

	return (get_sqrt(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: passed number
*
* Return: The natural sqrt of a passed number
*/
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}
