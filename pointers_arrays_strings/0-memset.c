#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: area memory to point
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int index = 0;
	char *start = s;

	while (index <= n)
	{
		s[index] = b;
		index++;
	}

	return (start);
}
