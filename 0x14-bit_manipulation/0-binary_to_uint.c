#include <stdlib.h>

/**
* binary_to_uint - converts a binary number to an uint.
* @b: passed binary number as a string
*
* Return: the converted number, (0) if b has other chars than 0 or 1 or
* b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		uint = uint * 2 + (*b++ - '0');
	}
	return (uint);
}
