#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end
 * @head: head of the passed Dll
 * @n: value of the data field in the new node
 * Return: address of the new node, NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *current = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
		new_node->prev = current;
	}

	return (new_node);
}
