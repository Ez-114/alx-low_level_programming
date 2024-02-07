#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes node at given position in a list
* @head: head of a list
* @index: index of the node
*
* Return: (1) Success, (0) Failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = NULL, *prev_node;
	unsigned int i = 0;

	/* list is empty & idx cannot be reached */
	if (!head || !(*head))
		return (-1);

	current_node = (*head);

	if (index == 0)
	{
		(*head) = current_node->next;
		free(current_node);
		return (1);
	}

	/* go to node at idx where current_node != NULL */
	while (current_node)
	{
		if (i == index)
		{
			prev_node->next = current_node->next;
			free(current_node);
			return (1);
		}
		prev_node = current_node;
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
