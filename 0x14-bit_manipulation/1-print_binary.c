#include "main.h"

/**
* print_binary - print the binary representation of a number
* @n: the passed number
*/
void print_binary(unsigned long int n)
{
	int pos = sizeof(unsigned long int) * 8, printed = 0;

	while (pos)
	{
		if (n & (1UL << --pos))
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
