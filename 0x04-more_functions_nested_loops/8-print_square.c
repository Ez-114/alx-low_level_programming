#include "main.h"

/**
 * print_square - print square using #
 * @size: size of the square in ints
*/
void print_square(int size)
{
	int rows, cols;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (rows = 0; rows < size; rows++)
	{
		for (cols = 0; cols < size; cols++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
