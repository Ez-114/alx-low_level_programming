#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all natural numbers
  * @n: start point
  */

void print_to_98(int n)
{
	while (n < 99)
	{
		printf("%d", n);

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}

	_putchar('\n');
}
