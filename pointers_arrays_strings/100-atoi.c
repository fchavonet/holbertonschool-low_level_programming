#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: a rediger
 */

int _atoi(char *s)
{
	int lenght = 0;
	int sign = 0;
	int result = 0;
	int final = 0;

	while (s[lenght] != '\n')
	{
		lenght++;
	}

	if ((s[lenght] == '+') || (s[lenght] == '-'))
	{
		sign = 1 - 2 * (s[lenght++] == '-') ;
	}

	final = sign * result;

	return (final);

}
