#include "lists.h"

/**
 * init_node - initiates new node
 * @n: data of the new node
 * Return: new node address
*/
dlistint_t *init_node(int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of passed dlistint_t linked list.
 * @idx: index to insert the new node.
 * @n: data of the new node.
 * Return: address of the new inserted node, NULL if failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current_node = NULL;
	dlistint_t *prev_node = NULL;
	unsigned int curr_idx = 0;

	new_node = init_node(n);
	if (!new_node)
		return (NULL);

	if (!(*h))
	{
		*h = new_node;
		return (new_node);
	}

	current_node = *h;
	while (current_node)
	{
		prev_node = current_node->prev;
		if (curr_idx == idx)
		{
			new_node->prev = prev_node;
			new_node->next = current_node;
			prev_node->next = new_node;
			current_node->prev = new_node;
			return (new_node);
		}
		curr_idx++;
		current_node = current_node->next;
	}
	free(new_node);
	return (NULL);
}
