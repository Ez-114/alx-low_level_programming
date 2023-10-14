#include "main.h"

/**
  * times_table - prints times table from 0 table till 9 table
  */

void times_table(void)
{
	int i = 0, j = 0, result;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			result = i * j;

			if (result > 9)
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');

				if (((j + 1) * i) <= 9)
				{
					_putchar(' ');
				}
			}

			j++;
		}
		i++;
		_putchar('\n');
	}
}

