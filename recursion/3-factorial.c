#include "main.h"

/**
 * factorial - return the fractional of a given number
 *
 * @n: the number to fractional return
 *
 * Return: the fractional of n
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
