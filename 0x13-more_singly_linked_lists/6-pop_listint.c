#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - deletes the head node of a list and return its data
* @head: head of the list
*
* Return: the data of the popped node, (0) if list is empty
*/
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *current_node = NULL;

	if (*head == NULL || head == NULL)
		return (0);
	
	current_node = *head;
	n = current_node->n;
	*head = current_node->next;
	free(current_node);

	return (n);
}
