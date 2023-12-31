#include "main.h"

/**
 * _puts_recursion - print the letter where the pointer is
 *
 * @s: string to print
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);

}
