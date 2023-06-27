#include "main.h"

/**
 * string_toupper - transform a string to uppercase
 *
 * @str: the string to transform
 *
 * Return: the string in upercase after the while (str)
 */

char *string_toupper(char *str)
{

	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}

		index++;
	}

	return (str);

}
