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
	unsigned int size_s1, size_s2, i, j;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);
	str = malloc(sizeof(*s1) * (size_s1 + size_s2 + 1));

	if (str == NULL)
		return (NULL);

	/* {0, 1, 2, 3, 4, 5} will stop at 4 */
	for (i = 0; i < size_s1; i++)
		str[i] = s1[i];

	/* {5, 6, 7, 8, 9, 10} will stop at 10 and start where we stopped above */
	for (i = size_s1, j = 0; i < size_s2; i++, j++)
		str[i] = s2[j];

	str[size_s1 + size_s2 - 1] = '\0';
	return (str);
}
