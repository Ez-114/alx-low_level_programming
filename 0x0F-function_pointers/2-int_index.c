#include <stdlib.h>

/**
* int_index - searches for an integer
* @array: passed array
* @size: size of array
* @cmp: pointer to a function
*
* Return: index of the integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i); /* if cmp returns 1 then return i */
	}

	return (-1); /* no match */
}
