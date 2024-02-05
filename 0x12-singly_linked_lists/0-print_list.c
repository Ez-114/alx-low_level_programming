#include "lists.h"
#include <stdlib.h>

/**
* print_list - prints all node elements in a given linked list
* @h: head of a linked list
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->str, h->len);
		else
			printf("[0] (nil)\n");

		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
