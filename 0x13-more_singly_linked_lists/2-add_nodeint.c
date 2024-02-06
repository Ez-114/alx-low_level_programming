#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - add node to the beginning of a list
* @head: head of the passed list
* @n: integer to fill inside the new node
*
* Return: address of the newly added node, (NULL) if FAILURE.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL); /* allocation failed */

	/* init the new node variables */
	new_node->n = n;
	new_node->next = NULL;

	/* add the new node */
	if (!(*head)) /* means the list is empty */
	{
		(*head) = new_node;
	}
	else
	{
		new_node->next = (*head);
		(*head) = new_node;
	}
	return (new_node);
}
