#include "main.h"

/**
  * print_times_table - prints time table till n
  * @n: tills where should the times table stop
  */
void print_times_table(int n)
{
	int rows, cols, result;

	rows = result = 0;

	if (n >= 0 && n <= 15)
	{
		while (rows <= n)
		{
			cols = 1;

			/**
			 * print initial result
			 * and some punctuation
			*/
			_putchar('0');
			_putchar(',');

			while (cols <= n)
			{
				/* calculates the times table */
				result = rows * cols;

				/* print result */
				if (result <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);

					/* check if we are at last col */
					if (cols != n)
						_putchar(',');
				}
				else if (result > 9 && result <= 99)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));

					/* check if we are at last col */
					if (cols != n)
						_putchar(',');
				}
				else if (result > 99)
				{
					_putchar(' ');
					_putchar('0' + (result / 100));
					_putchar('0' + ((result % 100) / 10));
					_putchar('0' + (result % 10));

					/* check if we are at last col */
					if (cols != n)
						_putchar(',');
				}

				cols++;
			}
			_putchar('\n');
			rows++;
		}
	}
	else
	{
		return;
	}
}
