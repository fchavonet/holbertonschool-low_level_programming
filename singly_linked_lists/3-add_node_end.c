#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list
 *
 * @head: pointer to the pointer of the first node
 * @str: the string to be store in the new node
 *
 * Return: adress of the new node
 *         NULL if memory allocation fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *last_node = *head;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		new_node = NULL;
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return (new_node);
}
