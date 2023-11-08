#include <string.h>

/**
 * compair - compairs two given strs to check if they are identical
 * @s1: first stirng
 * @s2: second string
 *
 * Return: true if they are identical, false otherwise
*/
int compair(char *s1, char *s2)
{
	while (*s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}

/**
 * _strstr - locates substring
 * @heystack: pointer to the main str to be examined
 * @needle: pointer to the substr used in search
 *
 * Return: pointer to the first character found in heystack using needle
 * , NULL if nothing found
*/
char *_strstr(char *heystack, char *needle)
{
	while (*heystack != '\0')
	{
		if ((*heystack == *needle) && compair(heystack, needle))
		{
			return (heystack);
		}
		heystack++;
	}
	return (NULL);
}
