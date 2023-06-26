#include "main.h"

/**
 * puts_half - prints second half os a string
 *
 * @str: string to print
 */

void puts_half(char *str)
{
	int lenght = 0;
	int start = 0;
	int i = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	if (lenght % 2 == 0)
	{
		start = (lenght / 2);
	}
	else
	{
		start = ((lenght - 1) / 2);
	}
	for (i = start ; i < lenght ; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
