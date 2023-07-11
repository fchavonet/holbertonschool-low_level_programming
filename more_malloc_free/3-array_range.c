#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * array_range - 
 * @min:
 * @max:
 *
 * Return:
 */

int *array_range(int min, int max)
{

	int *array = NULL;
	int index = 0;
	int n = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = min; index < max; index++)
	{
		n = index;
		array[index] = n;
	}

	return (array);
}
