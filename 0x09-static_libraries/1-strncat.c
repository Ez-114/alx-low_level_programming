#include <string.h>

/**
  * _strncat - copy string from src to dest till nth byte
  * @dest: destenation string
  * @src: source stirng
  * @n: nth byte
  *
  * Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	/* get length of dest to start copying from end of string */
	int i, len = strlen(dest);

	/* check if n + len < size of dest */
	if (n <= 0)
	{
		return (dest);
	}

	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
