#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds new node at the beginning
 * @head: head of the passed Dll
 * @n: value of the data field for a new node
 * Return: address of the new node, NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	/* Allocate & confirm allocation is success */
	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);

	/* Fill data fields in the newly allocated node */
	new_node->n = n;
	new_node->prev = NULL;

	/* Insert the node into the passed list */
	if (*head == NULL) /* List is empty */
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else /* List has elements exist in it */
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
