#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint_end - adds new node at the end of a list.
* @head: head of a list
* @n: integer variable for the 'n' variable in new node
*
* Return: address of the new node, (NULL) if FAILURE.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* make a node pointer to know where's the last node */
	listint_t *current = (*head);
	listint_t *new_node = NULL;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL); /* allocation failed */

	/* init the new node variables */
	new_node->n = n;
	new_node->next = NULL;

	/* add the new node */
	if (!(*head)) /* list is empty */
	{
		(*head) = new_node;
	}
	else
	{
		/* get the last node */
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	return (new_node);
}
