#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
* Return: a pointer to the bytes allocated
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		exit(98);

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
