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
	dlistint_t *before_node = *head;
	dlistint_t *actual_node = *head;
	dlistint_t *after_node = *head;
	unsigned int comp_index = 0;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(before_node);
		free(after_node);
		return (1);
	}

	for (comp_index = 0 ; comp_index != index - 1 ; comp_index++)
		before_node = before_node->next;
	for (comp_index = 0; comp_index != index; comp_index++)
	{
		if (actual_node == NULL)
		{
			return (-1);
		}
		actual_node = actual_node->next;
	}
	for (comp_index = 0; comp_index != index + 1 ; comp_index++)
		after_node = after_node->next;

	before_node->next = after_node;
	after_node->prev = before_node;
	actual_node->next = NULL;
	actual_node->prev = NULL;
	free(actual_node);

	return (1);


}
