#include <stdio.h>
#include <math.h>

/**
 * _sqrt - srquares a number
 * @x: input
 * Return: square of x
*/
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime - largest prime
 * @n: integer
*/
void largest_prime(long int n)
{
	int prime_num, largest;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (prime_num = 3; prime_num <= _sqrt(n); prime_num += 2)
	{
		while (n % prime_num == 0)
		{
			n /= prime_num;
			largest = prime_num;
		}
	}

	if (n > 2)
	{
		largest = n;
	}
	printf("%d\n", largest);
}

/**
 * main - enrty
 *
 * Return: 0 (Success)
*/
int main(void)
{
	largest_prime(612852475143);

	return (0);
}
