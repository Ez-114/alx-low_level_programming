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
	else if (!((n + len - 1) < sizeof(dest)))
	{
		return (dest);
	}

	for (i = 0; i <= n; i++)
	{
		dest[len + i] = src[i];

		/* terminate in case of no more to cpy */
		if (src[i] == '\0')
		{
			return (dest);
		}
	}
	return (dest);
}