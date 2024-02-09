#include "main.h"

/**
* get_bit - get the value of a bit at a given index
* @n: the passed number
* @index: the index of the bit
*
* Return: the bit value
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
