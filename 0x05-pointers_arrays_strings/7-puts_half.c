#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string var
*/
void puts_half(char *str)
{
	int n = strlen(str), i, j;

	if (n % 2 == 0)
	{
		j = n / 2;
	}
	else
	{
		j = (n - 1) / 2;
	}

	for (i = j + 1; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
