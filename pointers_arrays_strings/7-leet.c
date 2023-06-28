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
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char code[] = {'4', '3', '0', '7', '1'};
	int lenght = 0;
	int index = 0;

	while (s[lenght] != '\0')
	{
		for (index = 0 ; code[index] != '\0' ; index++)
		{
			if (s[lenght] == letters[index] || s[lenght] == letters[index] - 32)
			{
				s[lenght] = code[index];
			}
		}
		lenght++;
	}

	return (s);
}
