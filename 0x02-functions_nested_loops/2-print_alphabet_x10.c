#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet in lower case 10 times
  */
void print_alphabet_x10(void)
{
	int i = 0, j = 97;

	while (i < 10)
	{
		j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
