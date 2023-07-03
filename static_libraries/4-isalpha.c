#include "main.h"

/**
 * _isalpha - check if letter is lowercase or upercase
 *@c: character to be checked
 *
 * Return: 1 if it's good, 0 in other case
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
