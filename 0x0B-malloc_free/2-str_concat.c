#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates 2 strs
 * @s1: first str.
 * @s2: second str.
 *
 * Return: concatenated str, NULL if any error happen
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int size_s1, size_s2, i;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);
	str = malloc(sizeof(char) * (size_s1 + size_s2) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= (size_s1 + size_s2); i++)
	{
		if (i < size_s1)
			str[i] = s1[i];
		else
			str[i] = s2[i - size_s1];
	}
	str[i] = '\0';

	return (str);
}
