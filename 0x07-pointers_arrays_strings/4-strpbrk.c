#include <string.h>

/**
 * _strpbrk - search a string for any set of bytes
 * @s: pointer to the original string
 * @accept: pointer to the string used in search
 *
 * Example: _strpbrk("Hello, world", "world") --> "llo, world"
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * , NULL if no match
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, len = strlen(s);

	for (i = 0; i < len; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				/**
				 * this will return the pointer of s
				 * (which points to the first char in array s)
				 * + i givig me a new string starting from the first matching byte
				*/
				return (s + i);
			}
		}
	}

	/* if nothing returned then return (NULL) */
	return (NULL);
}
