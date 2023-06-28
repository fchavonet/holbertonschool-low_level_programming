#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * 
 * @s: a rediger
 *
 * Return: result is final integer
 */

int _atoi(char *s)
{
	int index = 0;
	int result = 0;


	while (s[index] != '\0')
	{
		if (s[index] >= '0' && s[index] <= '9')
		{
			result = result * 10 + s[index] - '0';
		}
		index++;
	}

	return (result);
}
