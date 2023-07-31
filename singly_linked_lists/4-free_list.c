#include "lists.h"

/**
 * free_list - frees the alist_t list
 *
 * @head: pointer to the pointer of the first node
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
			head->next = NULL;
		}
		free(head->str);
		head->str = NULL;
		free(head);
		head = NULL;
	}
}
