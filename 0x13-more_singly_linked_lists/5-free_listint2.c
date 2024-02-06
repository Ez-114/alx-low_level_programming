#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - free a list and set the head to NULL
* @head: head of a list
*/
void free_listint2(listint_t **head)
{
	listint_t *current_node = NULL;

	if ((*head) == NULL)
		return; /* means the list is already empty */

	while (*head)
	{
		current_node = (*head);
		(*head) = (*head)->next;
		free(current_node);
	}
	(*head) = NULL;
}
