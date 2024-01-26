#include "main.h"

/**
* create_array - Creates an array with dynamic size and init it
*					to a given char.
* @size: The size of the array.
* @c: The character used to init the array.
* Return: A pointer to the array (Success), NULL (Fail)
*/
char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(char) * size);
	unsigned int i;

	/* Check for size and allocation */
	if (size == 0 || str == NULL)
		return (NULL);

	/* Fill the array with the character passed (c) */
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
