#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area destination of the copy
 * @src: memory area to copy
 * @n: number of byte to copy
 *
 * Return: start, the start of the dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int index = 0;
	char *start = dest;

	while (index < n)
	{
		*dest++ = *src++;
		index++;
	}

	return (start);

}
