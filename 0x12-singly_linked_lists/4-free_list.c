#include "lists.h"
#include <stdlib.h>

/**
* free_list - free a given list
* @head: the head of the given list
*/
void free_list(list_t *head)
{
	list_t *current = NULL;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
