#include "lists.h"
#include <stdlib.h>

/**
* get_nodeint_at_index - get the nth node specified by a given index
* @head: head of the list
* @index: index of the node
*
* Return: Address of the node, NULL if node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i < index)
	{
		i++;
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
