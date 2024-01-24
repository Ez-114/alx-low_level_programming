#include "main.h"

/**
 * _puts - prints a single character at a time
 * @str: pointer pointing to string variable
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != 0; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
