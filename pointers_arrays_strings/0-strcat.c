#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string after which we will concatenate
 * @src: string to be concatenated
 *
 * Return: a pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
