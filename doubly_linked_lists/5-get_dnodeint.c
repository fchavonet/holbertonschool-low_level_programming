#include "lists.h"

/**
 * get_dnodeint_at_index - functions that returns the nth node of a list
 *
 * @head: pointer to the first node
 * @index: index of node starting from 0
 *
 * Return: the node corresponding to the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual_node = head;
	unsigned int comparison_index = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	for (; index != comparison_index; comparison_index++)
	{
		if (actual_node == NULL)
		{
			return (NULL);
		}
		actual_node = actual_node->next;
	}

	return (actual_node);
}
