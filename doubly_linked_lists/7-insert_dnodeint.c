#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 *
 * @h: pointer to the pointer of the first node
 * @idx: the index wher the new node should be added
 * @n: the int to be store in the new node
 *
 * Return: adress of the new node
 *         NULL if memory allocation fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *before_new_node = NULL;
	dlistint_t *after_new_node = NULL;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t) * 1);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (*h != NULL)
		before_new_node = *h;
	while (idx != 1)
	{
		before_new_node = before_new_node->next;
		if (!before_new_node)
		{
			return (NULL);
		}
		idx--;
	}

	if (before_new_node->next == NULL)
		return (add_dnodeint_end(h, n));



	after_new_node = before_new_node->next;

	before_new_node->next = new_node;
	after_new_node->prev = new_node;

	new_node->prev = before_new_node;
	new_node->next = after_new_node;

	return (new_node);

}
