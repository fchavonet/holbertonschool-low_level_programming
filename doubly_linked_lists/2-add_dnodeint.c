#include "lists.h"

/**
 * add_dnodeint - add a new node at the begining of a list
 *
 * @head: pointer to the pointer of the first node
 * @n: the integer to be store in the new node
 *
 * Return: adress of the new node
 *         NULL if memory allocation fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

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
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
