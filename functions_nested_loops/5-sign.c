#include "main.h"

/**
 * print_sign - print the sign of the number
 *@n: number to be checked
 *
 * Return: 1 if n > 0, 0 if n = 0, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
