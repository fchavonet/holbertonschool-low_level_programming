#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: pointer to the first node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes_number = 0;

	while (h != NULL)
	{
		if (h->str  == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		nodes_number++;
		h = h->next;

	}

	return (nodes_number);
}
