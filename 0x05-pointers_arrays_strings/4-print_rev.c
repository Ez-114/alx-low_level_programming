#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: passed string as a pointer
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
