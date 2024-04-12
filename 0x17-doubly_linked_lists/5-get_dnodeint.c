#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list.
 * @head: head of passed dlistint_t linked list.
 * @index: the index of the node, starting from 0.
 * Return: address of the nth node, NULL if node Does Not Exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int curr_idx = 0;

	if (!head)
		return (NULL);

	while (head->next)
	{
		current = head;
		if (curr_idx == index)
			return (current);

		curr_idx++;
		head = head->next;
	}

	return (NULL);
}
