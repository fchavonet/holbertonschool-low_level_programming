#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: the array where to search the integer
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int index_array = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (array && cmp != NULL)
	{
		for (; index_array < size ; index_array++)
		{
			if (cmp(array[index_array]))
			{
				return (index_array);
			}
		}
	}

	return (-1);
}
