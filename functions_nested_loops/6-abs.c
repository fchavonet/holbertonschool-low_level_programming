#include "main.h"

/**
 * _abs - print only the absolute value of the number
 *@n: number to be checked
 *
 * Return: absolute number if neg, or return n if positive number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
