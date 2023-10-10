#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: the given integer
  *
  * Return: the integer after computation
  */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
