#include "main.h"

/**
 * leet - encodes the string into 1337
 *
 * @s: the string to encode
 *
 * Return: the string after modifications
 */

char *leet(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == 'a' || s[index] == 'A')
		{
			s[index] = '4';
		}

		if (s[index] == 'e' || s[index] == 'E')
		{
			s[index] = '3';
		}

		if (s[index] == 'o' || s[index] == 'O')
		{
			s[index] = '0';
		}

		if (s[index] == 't' || s[index] == 'T')
		{
			s[index] = '7';
		}

		if (s[index] == 'l' || s[index] == 'L')
		{
			s[index] = '1';
		}

		index++;
	}
	return (s);
}
