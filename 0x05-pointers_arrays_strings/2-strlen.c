#include "main.h"
#include <stdio.h>

/**
* _strlen - return the length of a given string
* @s: array of characters
* Return: the number of characters inside an array of characters
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}

	return (++i);
}
