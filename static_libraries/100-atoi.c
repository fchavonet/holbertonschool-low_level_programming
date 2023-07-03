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
	int number_neg = 0;
	int sign = 0;

	while (s[index] != '\0')
	{
		if (s[index] == '-')
		{
			number_neg += 1;
		}

		if (s[index] >= '0' && s[index] <= '9')
		{
			result = result * 10 + s[index] - '0';
		}
		index++;
	}

	if (number_neg % 2 == 0)
	{
		sign = 1;
	}
	else
	{
		sign = -1;
	}

	return (result * sign);
}
