#include <stdlib.h>

/**
* flip_bits - gets the number of bits needed to flip to get from one number to
* another
* @n: 1st num
* @m: 2nd num
*
* Return: number of bits to flip, (-1) Error
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XorVal = n ^ m;
	unsigned int count = 0;

	while (XorVal)
	{
		if (XorVal & 1UL)
			count++;
		XorVal = XorVal >> 1;
	}
	return (count);
}
