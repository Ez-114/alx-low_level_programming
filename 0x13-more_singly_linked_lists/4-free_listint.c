#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a list
* @head: head of the given list
*/
void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	if (!head)
		return;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
