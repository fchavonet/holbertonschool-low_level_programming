#include "lists.h"

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
