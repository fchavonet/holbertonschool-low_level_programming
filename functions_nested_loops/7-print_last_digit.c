#include "main.h"

/**
 * print_last_digit - print thelast digit of n
 *@n: number to be checked
 *
 * Return: n % 10
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * n % 10;
		return (n);
	}
	else
	{
		n = n % 10;
		return (n);
	}
}
