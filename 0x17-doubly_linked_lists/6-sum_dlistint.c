#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: head of passed dll
 * Return: the sum of all the data (n), 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
