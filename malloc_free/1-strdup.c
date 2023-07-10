#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter
 *
 * @str: the string to copy
 *
 * Return: the nex destination array
 */

char *_strdup(char *str)
{
	char *array = NULL;
	int index = 0;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size] != '\0')
	{
		size++;
	}

	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = str[index];
	}

	return (array);
}

