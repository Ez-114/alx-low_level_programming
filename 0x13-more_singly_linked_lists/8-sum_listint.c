#include "lists.h"
#include <stdlib.h>

/**
* sum_listint - get the sum of data n in each node of a list
* @head: head of a list
*
* Return: sum of n of each node, (0) empty list
*/
int sum_listint(listint_t *head)
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
