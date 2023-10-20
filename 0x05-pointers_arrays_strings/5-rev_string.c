#include "main.h"

/**
 * rev_string - reverse string in its value
 * @s: passed string
*/

void rev_string(char *s)
{
	int i = 0;
	char *rev = s;

	while (s[i])
	{
		i++;
	}

	_putchar(rev);
}
