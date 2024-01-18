#include "main.h"

/**
  * _puts_recursion - A function that prints a string recursively.
  * @s: A character pointer to the passed stirng.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
