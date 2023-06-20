#include "main.h"

/**
 * print_last_digit - print thelast digit of n
 *@n: number to be checked
 *
 * Return: 0 if it's good
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * n % 10;
		_putchar(n);
		return (0);
	}
	else
	{
		n = n % 10;
		_putchar(n);
		return (0);
	}
}
