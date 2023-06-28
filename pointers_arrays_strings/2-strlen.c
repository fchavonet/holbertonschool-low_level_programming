#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: the string to count lenght
 *
 * Return: i for length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
