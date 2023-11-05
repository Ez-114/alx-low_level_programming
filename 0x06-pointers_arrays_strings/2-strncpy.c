#include <string.h>

/**
  * _strncpy - cpy a string from src to dest till the nth byte
  * @dest: pointer to the dest input
  * @src: pointer to the source input
  * @n: number of bytes taken from src
  *
  * Return: @dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
