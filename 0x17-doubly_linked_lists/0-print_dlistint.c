#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in a doubly ll
 * @h: head of the passed list
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
