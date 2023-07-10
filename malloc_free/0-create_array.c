#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 *                and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: the char toi initialize
 *
 * Return: NULL if size = 0, array pointer or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	char *array = NULL;
	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (size != 0)
	{
		array = malloc(size * sizeof(char));

		if (array != NULL)
		{
			for (index = 0; index < size; index++)
			{
				array[index] = c;
			}
		}
	}

	return (array);
}
