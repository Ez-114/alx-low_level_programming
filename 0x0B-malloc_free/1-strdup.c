#include "main.h"

/**
* get_size - takes string and returns its size.
* @str: passed str.
* Return: size of the string (Success), -1 (Otherwise)
*/
int get_size(char *str)
{
	int i;

	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
		i++;

	return (i + 1);
}

/**
* _strdup - allocates memory containing a copy of a given string.
* @str: string passed from the caller.
* Example: _strdup("ALX SE") --> return a pointer to a new array
*								with the passed string in it.
* Return: pointer to copied str (Success), NULL (Fail).
*/
char *_strdup(char *str)
{
	int i, size;
	char *cpy_str;

	/* Check the str if empty */
	if (str == NULL)
		return (NULL);

	size = get_size(str);
	cpy_str = malloc(sizeof(char) * size);
	if (cpy_str == NULL) /* Check if allocation is Success */
		return (NULL);

	for (i = 0; i < size; i++)
		cpy_str[i] = str[i];

	return (cpy_str);
}
