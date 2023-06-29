#include "main.h"

/**
 * _strpbrk -  search a string for any of a set of bytes
 *
 * @s: the string to test
 * @accept: the strign for reference
 *
 * Return: s + 1
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] !='\0')
		{
			if (s[i] == accept[j])
			{
				s++;
			}
			j++;
		}
		i++;
	}

	return (s + 1);
}
