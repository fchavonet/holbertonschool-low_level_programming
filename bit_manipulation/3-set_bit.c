#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: A pointer to the number whose bit will be set
 * @index: The index of the bit to be set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask <<= index;

	*n |= mask;
	return (1);
}

