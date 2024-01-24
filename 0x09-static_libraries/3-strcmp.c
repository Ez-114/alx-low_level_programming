#include <string.h>

/**
  * _strcmp - compairs two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: -ve int if s1 < s2, +ve int if s1 > s2, and 0 if s1 == s2
  */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			res = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (res);
}
