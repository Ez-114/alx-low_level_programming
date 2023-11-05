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
