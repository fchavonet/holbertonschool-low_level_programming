#include "main.h"

/**
 * _isupper - check if c is lowercase or uppercase
 *
 * @c: the character t test
 *
 * Return: 0 if c is lowercase, 1 if c is supercase
 */

int _isupper(int c)
{
	int r = 0;

	if ((c >= 'a') && (c <= 'z'))
	{
		r = 0;
	}

	if ((c >= 'A') && (c <= 'Z'))
	{
		r = 1;
	}
	return (r);
}
