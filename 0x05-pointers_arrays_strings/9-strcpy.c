#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the buffer pointed to
 * @src: src string
 *
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int srcSize = strlen(src), i;

	if (srcSize <= 0)
	{
		return ("");
	}

	for (i = 0; i < srcSize; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
