#include "main.h"

/**
 * more_numbers - print numbers
*/
void more_numbers(void)
{
	int row, col, num;

	for (int row = 0; row < 10; row++)
	{
		for (col = 0; col < 15; col++)
		{
			num = col;
			if (col > 9)
			{
				_putchar('1');
				num = col % 10;
			}
			_putchar('0' + num);
		}
		_putchar('\n');
	}
}
