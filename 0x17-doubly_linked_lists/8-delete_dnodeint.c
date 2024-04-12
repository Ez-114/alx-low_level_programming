#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index `index` of
 * a dlistint_t linked list.
 * @head: head of passed Dll.
 * @index: index of the node to be deleted.
 * Return: 1 on Success, -1 on Fail.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr_node = NULL;
	unsigned int curr_idx = 0;

	if (!head || !(*head))
		return (-1);

	curr_node = (*head);
	if (index == 0)
	{
		(*head) = curr_node->next;
		if (curr_node->next)
			curr_node->next->prev = NULL;
		free(curr_node);
		return (1);
	}

	while (curr_node)
	{
		if (curr_node->next == NULL && curr_idx == index)
		{
			curr_node->prev->next = NULL;
			free(curr_node);
			return (1);
		}
		else if (curr_idx == index)
		{
			curr_node->prev->next = curr_node->next;
			curr_node->next->prev = curr_node->prev;
			free(curr_node);
			return (1);
		}
		curr_idx++;
		curr_node = curr_node->next;
	}
	return (-1);
}
