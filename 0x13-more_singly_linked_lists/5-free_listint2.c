#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - free a list and set the head to NULL
* @head: head of a list
*/
void free_listint2(listint_t **head)
{
	listint_t *current_node = NULL, *temp_node = NULL;

	if ((*head) == NULL || head == NULL)
		return; /* means the list is already empty */

	current_node = (*head);
	while (current_node)
	{
		temp_node = current_node;
		current_node = current_node->next;
		free(temp_node);
	}
	(*head) = NULL;
}
