#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum values
 * @max: maximum values
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{

	int *array = NULL;
	int index = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	while (min <= max)
	{
		array[index] = min;
		index++;
		min++;
	}

	return (array);
}
