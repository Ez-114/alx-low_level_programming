#include <stdlib.h>

/**
* _strlen - return the length of a given string
* @s: array of characters
* Return: the number of characters inside an array of characters
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* string_nconcat - Concatenates two strings using n bytes.
* @s1: Passed str No. 1
* @s2: Passed str No. 2
* @n: bytes to copy from s2.
*
* Return: Pointer to the concat str (Success), NULL (Failure).
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* init vars */
	unsigned int s1_size, s2_size, i;
	char *concat;

	/* check the NULLs */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get the lengths */
	s1_size = _strlen(s1);
	s2_size = _strlen(s2);

	/* allocate required space */
	if (n < s2_size)
		concat = malloc((s1_size + n) * sizeof(char) + 1);
	else if (n >= s2_size)
	{
		concat = malloc((s1_size + s2_size) * sizeof(char) + 1);
		n = s2_size;
	}

	/* check if allocation is success */
	if (concat == NULL)
		return (NULL);

	/* start copying */
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[s1_size + i] = s2[i];

	concat[s1_size + s2_size] = '\0';
	return (concat);
}
