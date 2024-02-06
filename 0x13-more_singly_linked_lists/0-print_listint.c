#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_listint - prints all node elements in a given linked list
* @h: head of a linked list
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
