#include "main.h"

/**
 * _pow_recursion - return the value ox x raised to the power of y
 *
 * @x: the number to raised
 * @y: the power number
 *
 * Return: the result
 */


int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}

	return (_pow_recursion(x, y - 1) * x);
}
