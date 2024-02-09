#include "main.h"

/**
* print_binary - print the binary representation of a number
* @n: the passed number
*/
void print_binary(unsigned long int n)
{
	int pos = (sizeof(unsigned long int) * 8) - 1;

	while (pos)
	{
		if (n & (1UL << pos))
			_putchar('1');
		else
			_putchar('0');
		pos--;
	}
	_putchar('\n');
}
