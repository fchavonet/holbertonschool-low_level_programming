#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given position
 *
 * @head: pointer to the pointer of the first node
 * @index: the index when the node should be delete (before)
 *
 * Return: 1 if it succeeded
 *         -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous_node = NULL;
	dlistint_t *actual_node = *head;
	dlistint_t *next_node = NULL;
	unsigned int actual_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(actual_node);
		return (1);
	}

	for (actual_index = 0; actual_index < index; actual_index++)
	{
		actual_node = actual_node->next;
		if (actual_node == NULL)
			return (-1);
		if (!actual_node->next)
		{
			actual_node->prev = NULL;
			actual_node->next = NULL;
			free(actual_node);
			return (1);
		}

		previous_node = actual_node->prev;
		next_node = actual_node->next;
		previous_node->next = next_node;
		next_node->prev = previous_node;
		free(actual_node);
	}

	return (1);
}
