#include "lists.h"

/**
 * dlistint_len - calculates the length of a ll
 * @h: head of a list
 * Return: Length of the ll
*/
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
