#include "main.h"

/**
 * _sqrt - function to verify the square root of a number
 *
 * @result : the result of multiplier * multiplier
 * @multiplier: the multiplier to check for square root
 *
 * Return: the square root if found, -1 if not found
 */

int _sqrt(int result, int multiplier)
{
	if (multiplier * multiplier == result)
	{
		return (multiplier);
	}
	else if (multiplier * multiplier > result)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(result, multiplier + 1));
	}
}

/**
 * _sqrt_recursion - calculate the square root using recursion
 * @n: the number for witch to calculate the square root
 *
 * Return: the square root of n if found, -1 if not found
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
