#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string passed
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of char c
*/
char *_strchr(char *s, char c)
{
	int i, len = strlen(s);
	char *ptr = NULL;

	if (c == '\0')
	{
		return ("");
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			ptr = s + i;
			return (ptr);
		}
	}
	return (NULL);
}
