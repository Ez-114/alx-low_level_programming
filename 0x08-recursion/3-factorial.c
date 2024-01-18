#include "main.h"

/**
  * factorial - computes the factorial of a given number
  * @n: given number to get its factorial
  *
  * Return: the factorial on n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
