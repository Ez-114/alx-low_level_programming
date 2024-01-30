#include <stdlib.h>

/**
* array_iterator - a function that executes a function for each element
*					in array.
* @array: passed array.
* @size: size of the array.
* @action: pointer to a function to execute on each array element
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
