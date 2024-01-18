#include "main.h"

/**
  * _pow_recursion - compute x powered by y
  * @x: Base number
  * @y: power of the base
  *
  * Return: X powered by Y
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	if (x == 0)
		return (0);

	return (x * _pow_recursion(x, y - 1));
}
