#include "main.h"

/**
  * print_number - print an integer
  * @n: integer var
*/
void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

/**
 * print_diagsums - prints the sum of two diagonals of a 2d of integers.
 * @a: array
 * @size: size of array a
*/
void print_diagsums(int *a, int size)
{
	int i, mainDiagonalSum = 0, secondaryDiagonalSum = 0;

	for (i = 0; i < size; i++)
	{
		mainDiagonalSum += a[i * size + i];
		secondaryDiagonalSum += a[(i + 1) * size - (i + 1)];
	}

	print_number(mainDiagonalSum);
	_putchar(',');
	_putchar(' ');
	print_number(secondaryDiagonalSum);
	_putchar('\n');
}
