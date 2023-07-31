#include "lists.h"

size_t list_len(const list_t *h)
{
	int number_nodes;

	while (h != NULL)
	{
		h = h->next;
		number_nodes++;
	}

	return (number_nodes);
}
