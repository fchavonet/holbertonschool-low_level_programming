#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;
	hash_node_t *new = NULL;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}

	new->key = strdup(key);
	new->next = NULL;

	if (ht->array[index] != NULL)
	{
		new->next = ht->array[index];
	}

	ht->array[index] = new;

	return (1);
}
