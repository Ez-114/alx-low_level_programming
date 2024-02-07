#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts new node at given position in a list
* @head: head of a list
* @idx: index of the node
* @n: data value of the new node
*
* Return: Address of the new node, NULL if FAILURE
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = NULL, *new_node = NULL;
	unsigned int i = 0;

	/* list is empty & idx cannot be reached */
	if (!head)
		return (NULL);

	/* allocate space for new_node & check allocation */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	/* store data in allocated node */
	new_node->next = NULL;
	new_node->n = n;

	/* idx == 0? let head point to new node */
	if (idx == 0)
	{
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}

	/* go to node at idx where current_node != NULL */
	current_node = (*head);
	while (current_node)
	{
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
