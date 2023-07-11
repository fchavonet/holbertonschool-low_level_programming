#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the size of the memory to be allacate
 *
 * Return: a pointr to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	int *allocated_memory = NULL;

	allocated_memory = malloc(b);

	if (allocated_memory == NULL)
	{
		exit(98);
	}

	return (allocated_memory);

}
