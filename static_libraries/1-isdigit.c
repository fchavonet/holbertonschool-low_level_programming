#include "main.h"

/**
 * _isdigit - check if c is a digit
 *
 *@c: the entry to test
 *
 * Return: 1 if n is a digit, 0 otherwise
 */

int _isdigit(int c)
{

	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
