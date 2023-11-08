#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - print sting reversed
 * @s: string
*/
void _print_rev_recursion(char *s) /* hello --> 5 */
{
	if (s[0] == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
