#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* _strlen - calculates the length of a given string
* @s: array of characters
* Return: length of s execluding NULL character
*/

unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
* add_node_end - adds a new node to the end of a given list
* @head: head of a given list
* @str: string
*
* Return: address of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	unsigned int s_len = 0;

	/* init the new node */
	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	/* init the str field in new node */
	s_len = _strlen(str);
	new_node->str = malloc(sizeof(char) * s_len);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	/* store values */
	new_node->str = strdup(str);
	new_node->len = s_len;
	new_node->next = NULL;

	/* add the new node to the list */
	if (!(*head)) /* means the list is empty */
	{
		(*head) = new_node;
	}
	else
	{
		current = (*head);
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}
	return (new_node);
}
