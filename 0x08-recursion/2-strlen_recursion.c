#include "main.h"

/**
  * _strlen_recursion - calculates the length of a given string recursively
  * @s: passed string
  * Return: (int) length of the passed string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
