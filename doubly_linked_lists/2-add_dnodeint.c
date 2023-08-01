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

	if (new_node == NULL)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
