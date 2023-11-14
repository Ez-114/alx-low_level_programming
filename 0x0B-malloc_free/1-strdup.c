#include <stdlib.h>
#include <string.h>

/**
  * _strdup - copy string to newly allocated space.
  * @str: pointer to a string
  *
  * Return: pointer to the doplicated string,
  * NULL for any error.
  */
char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int size, i;

	size = strlen(str);
	str_cpy = malloc(sizeof(*str) * size);

	if (str_cpy == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		str_cpy[i] = str[i];
	}
	return (str_cpy);
}
