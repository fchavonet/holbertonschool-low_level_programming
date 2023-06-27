#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string after which we will concatenate
 * @src: string to be concatenated
 * @n: number of bytes from src
 *
 * Return: a pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	return (dest);
}
