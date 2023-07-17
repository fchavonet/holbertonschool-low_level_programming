#include <stdio.h>
#include <stdlib.h>

#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 *
 * @array: the array to use
 * @size: size of the array
 * @action: pointer to function I need to use
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index_array = 0;

	for (; index_array < size ; index_array++)
	{
		action(array[index_array]);
	}
}
