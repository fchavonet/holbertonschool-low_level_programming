#include "lists.h"

/**
 * dlistint_len - return the number of elements in the list
 *
 * @h: pointer to the first node
 *
 * Return: returns the number of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
