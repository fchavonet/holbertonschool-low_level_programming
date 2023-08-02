#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a list
 *
 * @head: pointer to the pointer of the first node
 * @n: the int to be store in the new node
 *
 * Return: adress of the new node
 *         NULL if memory allocation fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *last_node = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL)
	{
		head = &new_node;
		return (new_node);
	}

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
