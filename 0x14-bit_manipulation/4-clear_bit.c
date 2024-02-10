#include <stdlib.h>

/**
* clear_bit - clears the value of a bit at a given index
* @n: passed number by reference
* @index: given index of the bit
*
* Return: (1) Success, (-1) Error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8 || n == NULL)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
