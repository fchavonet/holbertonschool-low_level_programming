#include "lists.h"

/**
 * list_len - prints the number of elements in the list
 *
 * @h: pointer to the first node
 *
 * Return: the number of node
 */

size_t list_len(const list_t *h)
{
	int number_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_nodes++;
	}

	return (number_nodes);
}
