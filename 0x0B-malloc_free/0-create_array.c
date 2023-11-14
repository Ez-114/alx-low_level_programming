#include <stdlib.h>

/**
  * create_array - creates array of chars and initializes it with
  * with given char.
  * @size: size of the array.
  * @c: char to fill array with.
  *
  * Return: ptr to the created array,
  * NULL if creation fails.
  */
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(*str) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	if (!(*str))
		return (NULL);

	return (str);
}
