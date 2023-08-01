#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data (n) of a list
 *
 * @head: pointer to the first node
 *
 * Return: 0 if the list is empty
 *         the sum of all data (n) in other case
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *actual_node = head;
	int sum_result = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (actual_node != NULL)
	{
		sum_result += actual_node->n;
		actual_node = actual_node->next;
	}

	return (sum_result);

}
