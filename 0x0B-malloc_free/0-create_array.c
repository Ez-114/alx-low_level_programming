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
	char *str;
	unsigned int i;

	str = malloc(sizeof(*str) * size);
	if (str == NULL ||  size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
