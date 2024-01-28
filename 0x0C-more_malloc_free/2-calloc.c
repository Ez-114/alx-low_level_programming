#include <stdlib.h>

/**
* _calloc - allocates memory for an array using malloc and init it to 0.
* @nmemb: number of elements in an array.
* @size: number of bytes for each element.
*
* Return: pointer to allocated mem (Success), NULL (Failure).
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;

	p = malloc(n);
	if (p == NULL)
		return (NULL);

	/* init the allocated mem to 0 */
	while (n--)
		p[n] = 0;

	return (p);
}
