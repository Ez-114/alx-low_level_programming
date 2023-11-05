#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the tested string
 * @accept: pointer to the testing string
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (j);
		}
	}
	return (i);
}
