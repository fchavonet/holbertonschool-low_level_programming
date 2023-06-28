#include "main.h"

/**
 * _strspn - get the lenght of a prefix substring
 *
 * @s: string to verify
 * @accept : reference string
 *
 * Return: number, the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int number = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}

		if (accept[j] == '\0')
		{
			number += 1;
		}
		i++;
	}

	return (number);
}
