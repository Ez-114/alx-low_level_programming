#include "main.h"

/**
  * _puts_recursion - A function that prints a string recursively.
  * s: A character pointer to the passed stirng.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		_putchar(*s);
		s++;
		if (*s == '\0')
			_putchar('\n');
		_puts_recursion(s);
	}
}
