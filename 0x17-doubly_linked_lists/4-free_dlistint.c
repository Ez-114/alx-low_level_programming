#include "lists.h"

/**
 * free_dlistint - free a dll
 * @head: head of passed dll
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	if (!head)
		return;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
