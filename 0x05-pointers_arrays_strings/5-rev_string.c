#include <string.h>

/**
 * rev_string - reverse string in its value
 * @s: passed string
*/
void rev_string(char *s)
{
	/* get the size of the string */
	int size = strlen(s), i = 0;
	char temp;

	while (i < (size / 2))
	{
		temp = s[i];
		s[i] = s[size - 1 - i];
		s[size - 1 - i] = temp;
		i++;
	}
}
