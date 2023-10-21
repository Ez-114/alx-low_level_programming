#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 till 9 without 2 and 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
