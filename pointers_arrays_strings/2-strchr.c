#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to check
 * @c: the character to found
 *
 * Return: 0 (NULL) if no correspondence found
 */

char *_strchr(char *s, char c)
{

	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}

	if (s[index] != c)
	{
		return (0);
	}

	return (0);
}
