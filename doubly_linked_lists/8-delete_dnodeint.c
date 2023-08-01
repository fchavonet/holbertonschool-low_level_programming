#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given position
 *
 * @head: pointer to the pointer of the first node
 * @index: the index when the node should be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *prev_node, *next_node;
	unsigned int actual_index;

	if (*head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	for (actual_index = 0; actual_index < index; actual_index++)
	{
		if (current_node == NULL)
			return (-1);

		current_node = current_node->next;
	}

	prev_node = current_node->prev;
	next_node = current_node->next;

	if (prev_node)
		prev_node->next = next_node;
	if (next_node)
		next_node->prev = prev_node;

	free(current_node);
	return (1);
}

