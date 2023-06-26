#include "main.h"

/**
 * puts_half - prints second half os a string
 *
 * @str: string to print
 */

void puts_half(char *str)
{
	int lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	for (lenght = ((lenght - 1) / 2) ; str[lenght] != '\0' ; lenght++)
	{
		_putchar(str[lenght]);
	}
	_putchar('\n');
}
