#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * _calloc -
 *
 * @nmemb:
 * @size:
 *
 * Return:
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *array = NULL;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	while (index < (nmemb * size))
	{
		array[index] = 0;
		index++;
	}

	return (array);

}
