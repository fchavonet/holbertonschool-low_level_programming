#include "lists.h"

/**
 * free_dlistint - frees the dlistint_t list
 *
 * @head: pointer to the pointer of the first node
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_dlistint(head->next);
			head->next = NULL;
		}

		free(head);

	}
}
