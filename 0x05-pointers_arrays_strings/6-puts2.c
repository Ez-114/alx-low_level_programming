#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string, starting with
 * the first character
 * @str: string of chars
*/
void puts2(char *str)
{
	int size = strlen(str), i = 0;

	while (i < size)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
