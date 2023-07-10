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
	int index_str = 0;
	int index_array = 0;

	array = malloc(sizeof(str));

	while (str[index_str] != '\0')
	{
		index_str++;
		index_array++;
	}

	if (array == NULL)
	{
		return (NULL);
	}

	index_str = 0;
	while (str[index_str] != '\0')
	{
		array[index_str] = str[index_str];
		index_str++;
	}

	return (array);
}
