#include "main.h"

/**
 * print_rev - prints string in reverse order
 * @s: passed string as a pointer
*/

void print_rev(char *s)
{
	int i = 0;

	/* to get the size of the array of characters */
	while (*(s + i) != '\0')
	{
		i++;
	}

	/* now go from i to 0 to print in reverse where i is the number of chars */
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
}
