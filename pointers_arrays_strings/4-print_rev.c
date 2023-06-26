#include "main.h"

/**
 * print_rev - print a reverse string
 *
 * @s: the string to reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i != 0)
	{
		_putchar(s[--i]);

	}
	_putchar('\n');
}
