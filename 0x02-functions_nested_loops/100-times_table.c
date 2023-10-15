#include "main.h"

/**
  * print_times_table - prints time table till n
  * @n: tills where should the times table stop
  */
void print_times_table(int n)
{
	int rows, cols, result;

	if (n <= 15 || n >= 0)
	{
		for (rows = 0; rows <= n; rows++)
		{
			_putchar('0');
			for (cols = 1; cols <= n; cols++)
			{
				_putchar(',');
				_putchar(' ');

				result = rows * cols;

				if (result <= 9)
				{
					_putchar(' ');
				}
				if (result <= 99)
				{
					_putchar(' ');
				}
				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + 48);
				}
				_putchar((result % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
