#include "main.h"

/**
* get_size - gets the size of a string.
* @str: passed string.
* Return: size of str (Success).
*/
int get_size(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i + 1);
}

/**
* str_concat - merges 2 strings with each other starting with s1.
* @s1: First string passed.
* @s2: Second string passed.
* Return: pointer to the concatenated str (Success), NULL (Fail)
*/
char *str_concat(char *s1, char *s2)
{
	int i, s1_size, s2_size;
	char *strc;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s1_size = get_size(s1);
	s2_size = get_size(s2);
	strc = malloc((s1_size + s2_size) * sizeof(char));
	if (strc == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		strc[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		strc[(i + s1_size) - 1] = s2[i];

	strc[(s1_size + s2_size) - 1] = '\0';

	return (strc);
}
